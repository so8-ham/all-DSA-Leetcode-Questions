class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> add;

        // Combine both arrays
        for (int i = 0; i < nums1.size(); i++)
            add.push_back(nums1[i]);

        for (int i = 0; i < nums2.size(); i++)
            add.push_back(nums2[i]);

        // Sort the combined array
        sort(add.begin(), add.end());

        int n = add.size();
        if (n % 2 == 0) {
            return (add[n/2 - 1] + add[n/2]) / 2.0;  
        } else {
            return add[n/2];
        }
    }
};
