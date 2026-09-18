class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>anagram;
           
           for(auto  s: strs){
            string st=s;
            sort(st.begin(),st.end());
            anagram[st].push_back(s);
           }
           vector<vector<string>>ans;

           for(auto& pair: anagram){
            ans.push_back(pair.second);
           }
return ans;

    }
};