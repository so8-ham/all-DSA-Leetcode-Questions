class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
       int largesum=0;
        int smallsum=0;
        for(int i=n-1;i>=n-k;i--){
            largesum+=nums[i];
        }

        for(int j=0;j<k;j++){
             smallsum+=nums[j];
        }
        return largesum-smallsum;
    }
};