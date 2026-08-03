class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int even = 0;
        int odd = 1;
        int n = nums.size();

        while (even < n && odd < n) {
            // Correct even index
            while (even < n && nums[even] % 2 == 0)
                even += 2;

            // Correct odd index
            while (odd < n && nums[odd] % 2 == 1)
                odd += 2;

            // Swap misplaced elements
            if (even < n && odd < n)
                swap(nums[even], nums[odd]);
        }

        return nums;
    }
};