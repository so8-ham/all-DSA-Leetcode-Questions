class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;
        
        while (left < right) {
            // Cast to unsigned char to prevent undefined behavior
            while (left < right && !isalnum(static_cast<unsigned char>(s[left]))) {
                left++;
            }
            while (left < right && !isalnum(static_cast<unsigned char>(s[right]))) {
                right--;
            }
            
            if (tolower(static_cast<unsigned char>(s[left])) != tolower(static_cast<unsigned char>(s[right]))) {
                return false;
            }
            
            left++;
            right--;
        }
        
        return true;
    }
};
