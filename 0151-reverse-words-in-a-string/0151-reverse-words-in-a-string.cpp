class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int start = 0;

        for (int i = 0; i <= s.size(); i++) {
            if (i == s.size() || s[i] == ' ') {
                reverse(s.begin() + start, s.begin() + i);
                start = i + 1;
            }
        }

        // Remove extra spaces
        string ans;
        int i = 0;

        while (i < s.size()) {
            while (i < s.size() && s[i] == ' ') {
                i++;
            }

            if (i >= s.size()) break;

            if (!ans.empty()) {
                ans += ' ';
            }

            while (i < s.size() && s[i] != ' ') {
                ans += s[i];
                i++;
            }
        }

        return ans;
    }
};