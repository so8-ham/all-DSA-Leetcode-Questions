class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> bits;

        while (n > 0) {
            int rem = n % 2;
            bits.push_back(rem);
            n = n / 2;
        }

        reverse(bits.begin(), bits.end());

        int m = bits.size();

        for (int i = 1; i < m; i++) {
            if (bits[i] == bits[i - 1]) {
                return false;
            }
        }

        return true;
    }
};