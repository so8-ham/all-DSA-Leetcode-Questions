class Solution {
public:
    bool canAliceWin(int n) {
      int stone = 10;
      bool aliceturn = true;
      while(n>=stone){
        n-=stone;
        stone--;
        aliceturn=!aliceturn;
      }
      return !aliceturn;
    }
};