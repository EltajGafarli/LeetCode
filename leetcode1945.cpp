class Solution {
public:
    int convert(int num){
      int ans = 0;
      while(num > 0){
        ans += num % 10;
        num = num / 10;
      }
      return ans;
    }
  
    int getLucky(string s, int k) {
      int ans = 0;
      for(int i = 0;i<s.length();i++){
        ans += convert(s[i] - 'a' + 1);
      }
      while(ans >= 10 && k > 1){
        ans = convert(ans);
        k --;
      }
      return ans;
    }
};
