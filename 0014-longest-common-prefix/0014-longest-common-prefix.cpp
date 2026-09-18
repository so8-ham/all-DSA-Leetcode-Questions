class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        int rows=strs[0].size();
        int cols=strs.size();

        for(int i=0;i<rows;i++){
            char ch=strs[0][i];

            for(int j=1;j<cols;j++){
                if(i>=strs[j].size()|| ch!=strs[j][i])
                     return strs[0].substr(0,i);
            }
        }
        return strs[0];
    }
};