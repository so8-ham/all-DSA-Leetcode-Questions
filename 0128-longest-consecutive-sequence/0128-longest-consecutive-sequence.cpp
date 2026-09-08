class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        for(int num:nums){
            st.insert(num);
        }
        int largest=0;
        for(int num:st){
            if(st.find(num-1)==st.end()){
                int current=num;
                int count=1;

                while(st.find(current+1)!=st.end()){
                    current++;
                    count++;
                }
                largest=max(largest,count);
            }

        }
        return largest;


    }
};