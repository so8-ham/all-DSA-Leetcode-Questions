class Solution {
public:
    string makeFancyString(string s) {
       string ch;
        int n=s.size();
       for(int i=0;i<n;i++){
           
        if(ch.size()>=2 &&
         ch[ch.size() - 1] == s[i] &&
        ch[ch.size() - 2] == s[i]){
            continue;
    }

     ch.push_back(s[i]);
       }
       return ch;
    }
};