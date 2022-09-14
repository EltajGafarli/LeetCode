class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
      vector<int>ans;
      vector<int>result;
      int i = 0,p = 0;
      while(i < s.length()){
        if(p + widths[s[i] - 'a'] <= 100){
          p += widths[s[i] - 'a'];
        }else{
          result.push_back(p);
          p = widths[s[i] - 'a'];
        }
        i ++;
      }
      result.push_back(p);
      ans.push_back(result.size());
      ans.push_back(result[ans[0] - 1]);
      return ans;
    }
};
