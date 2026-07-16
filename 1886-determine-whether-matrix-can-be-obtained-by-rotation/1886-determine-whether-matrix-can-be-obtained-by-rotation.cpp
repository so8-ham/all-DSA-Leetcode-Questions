class Solution {
public:
    vector<vector<int>> Rotatearr(vector<vector<int>> arr, int n) {
        
        // Transpose
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(arr[i][j], arr[j][i]);
            }
        }

        // Reverse each row
        for (int i = 0; i < n; i++) {
            int start = 0;
            int end = n - 1;

            while (start < end) {
                swap(arr[i][start], arr[i][end]);
                start++;
                end--;
            }
        }

        return arr;
    }

    bool findRotation(vector<vector<int>>& mat,
                      vector<vector<int>>& target) {
        
        int n = mat.size();

        for (int rotationCount = 0; rotationCount < 4; rotationCount++) {
            
            if (mat == target) {
                return true;
            }

            mat = Rotatearr(mat, n);
        }

        return false;
    }
};