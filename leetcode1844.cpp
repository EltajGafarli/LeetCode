class Solution {
public:
    string replaceDigits(string s) {
      for(int i = 0;i<s.length();i++){
        if(i % 2 == 1){
          s[i] = char(int(s[i - 1]) + int(s[i]) - 48);
        }
      }
      return s;
    }
};
