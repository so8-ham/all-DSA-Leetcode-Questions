class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            // Make mid even
            if (mid % 2 == 1)
                mid--;

            if (nums[mid] == nums[mid + 1]) {
                // Single element is on the right
                start = mid + 2;
            } else {
                // Single element is on the left (or mid itself)
                end = mid;
            }
        }

        return nums[start];
    }
};