class Solution {
public:
    string truncateSentence(string s, int k) {
      int count = 0,i = 1;
      string ans = "";
      while(count < k){
        if(s[i] == ' '){
          count ++;
        }
        ans += s[i - 1];
        i++;
        if(i == s.length() + 1) break;
      }
      return ans;
    }
};
