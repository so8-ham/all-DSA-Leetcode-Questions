class Solution {
public:
    int splitNum(int num) {
        vector<int>nums;
        int rem;
        int num1=0, num2=0;
        while(num>0){
               rem=num%10;
               num=num/10;
               nums.push_back(rem);
        }
        sort(nums.begin(), nums.end());

        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i%2==0){
                num1=num1*10+nums[i];
            }else{
                num2=num2*10+nums[i];
            }


        }
        return num1+num2;
    }
};