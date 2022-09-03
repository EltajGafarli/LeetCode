class Solution {
public:
    string mergeAlternately(string word1, string word2) {
      int len1 = word1.length(),len2 = word2.length();
      int len = max(len1,len2);
      int i = 0;
      string ans;
      ans = ans + "";
      while(i < len){
        if(i < len1){
          ans += word1[i];
        }
        if(i < len2){
          ans += word2[i];
        }
        i ++;
      }
      return ans;
    }
};
