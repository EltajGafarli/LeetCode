class Solution {
public:
    bool judgeCircle(string moves) {
      int x = 0,y = 0;
      int i = 0;
      while(i < moves.length()){
        char ch = moves[i ++];
        if(ch == 'U') y ++;
        else if(ch == 'D') y --;
        else if(ch == 'L') x --;
        else x ++;
      }
      return x == 0 && y == 0;
    }
};
