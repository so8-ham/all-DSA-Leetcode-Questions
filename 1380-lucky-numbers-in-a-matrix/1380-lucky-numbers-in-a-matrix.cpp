class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int> ans;

        for (int i = 0; i < m; i++) {
            int mini = INT_MAX;
            int col = -1;

            for (int j = 0; j < n; j++) {
                if (matrix[i][j] < mini) {
                    mini = matrix[i][j];
                    col = j;
                }
            }

            bool isLucky = true;

            for (int k = 0; k < m; k++) {
                if (matrix[k][col] > mini) {
                    isLucky = false;
                    break;
                }
            }

            if (isLucky) {
                ans.push_back(mini);
            }
        }

        return ans;
    }
};