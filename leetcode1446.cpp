class Solution {
public:
    int maxPower(string s) {
      int cnt = 1,ans = 0;
      for(int i = 1;i<s.length();i++){
        if(s[i-1] == s[i]) cnt ++;
        else{
          ans = max(ans,cnt);
          cnt = 1;
        }
      }
      ans = max(ans,cnt);
      return ans;
    }
};
