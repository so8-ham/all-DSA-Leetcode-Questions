class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
//push neg number in neg array and pos number in  pos array...
       for(int i=0;i<nums.size();i++){
        if(nums[i]<0){
            neg.push_back(nums[i]);
        }else{
            pos.push_back(nums[i]);
        }
       }
//check pos is present or not...
     int n=neg.size();
     int m=pos.size();
     vector<int>ans(n+m);
if(pos.size()==0){
    for(int i=0;i<n;i++){
         neg[i]=neg[i]*neg[i];
    }
    reverse(neg.begin(),neg.end());
    return neg;
}

if(neg.size()==0){
    for(int i=0;i<m;i++){
        pos[i]=pos[i]*pos[i];
    }
    return pos;
}

int i=0,j=0,id=0;


 for(int k=0;k<m;k++){
        pos[k]=pos[k]*pos[k];
    }

 for(int k=0;k<n;k++){
         neg[k]=neg[k]*neg[k];
    }
reverse(neg.begin(),neg.end());
//Merge...
while(i<n && j<m){
     if(neg[i]<=pos[j]){
        ans[id++]=neg[i++];
     }else{
        ans[id++]=pos[j++];
     }
}
while(i<n){
    ans[id++]=neg[i++];
}

while(j<m){
    ans[id++]=pos[j++];
}

return ans;
    }
};