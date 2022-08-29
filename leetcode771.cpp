class Solution {
public:
  
  static int countOfA(char a,string s){
    int c = 0;
    for(int i = 0; i < s.length() ; i ++){
      if(s[i] == a){
        c ++;
      }
    }
    return c;
  }
  
  int numJewelsInStones(string jewels, string stones) {
    int count = 0;
    for(int i = 0; i < jewels.length() ; i++){
      count += countOfA(jewels[i],stones);
    }
    return count;
  }
};
