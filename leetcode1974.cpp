class Solution {
public:
    int minTimeToType(string word) {
      int ans = word.length();
      char point = 'a';
      for(int i = 0;i<word.length();i++){
        ans += min(abs(word[i] - point),26 - abs(word[i] - point));
        point = word[i];
      }
      return ans;
    }
};
