class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int left =1;
        int right =1;
        int maxmul  =INT_MIN;

        int n= nums.size();
        for(int i=0; i< n; i++){
            if(left==0) left = 1;
            if(right ==0) right =1;

            left*=nums[i];

            right*=nums[n-i-1];

            maxmul = max(maxmul, max(left,right));
        }

        return maxmul;
    }
};