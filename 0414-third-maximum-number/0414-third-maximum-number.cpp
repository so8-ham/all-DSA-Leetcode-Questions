class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int first = INT_MIN, second = INT_MIN, third = INT_MIN;
        int count = 0; 

        for (int num : nums) {
        
            if ((count >= 1 && num == first) || 
                (count >= 2 && num == second) || 
                (count == 3 && num == third)) {
                continue;
            }

            if (count == 0 || num > first) {
                third = second;
                second = first;
                first = num;
                count++;
            } else if (count == 1 || num > second) {
                third = second;
                second = num;
                count++;
            } else if (count == 2 || num > third) {
                third = num;
                count++;
            }
        }

        // If we filled at least 3 distinct slots, return third. Otherwise, return first.
        return (count >= 3) ? third : first;
    }
};
