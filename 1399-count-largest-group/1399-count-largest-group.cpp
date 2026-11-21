class Solution {
public:
    int countLargestGroup(int n) {
        vector<int> freq(37, 0);

        int maxSize = 0;

        for (int i = 1; i <= n; i++) {
            int num = i;
            int sum = 0;

            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }

            freq[sum]++;
            maxSize = max(maxSize, freq[sum]);
        }

        int ans = 0;

        for (int count : freq) {
            if (count == maxSize) {
                ans++;
            }
        }

        return ans;
    }
};