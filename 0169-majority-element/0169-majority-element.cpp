class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;

        for(auto num:nums){
            mp[num]++;
        }
        for(auto m: mp){
            if(m.second>n/2)
            return m.first;
        }
        return 0;
    }
};