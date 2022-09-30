class Solution {
public:
    int count(int n){
      if(n == 0) return n;
      int cnt = 0;
      while(n > 0){
        cnt += n % 2;
        n = n / 2;
      }
      return cnt;
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i = 0; i <= n; i++){
          ans.push_back(count(i));
        }
        return ans;
    }
};
