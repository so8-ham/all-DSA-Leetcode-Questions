class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        vector<char> ch; 
       for(int i=0;i<n;i++){
        if(isalnum(s[i])){
            ch.push_back(tolower(s[i]));
        }
       }

       int left=0,right=ch.size()-1;

       while(left<right){
        if(ch[left]!=ch[right]){
            return false;
        }
           left++;
        right--;
        
       }
       return true;
    }
};
