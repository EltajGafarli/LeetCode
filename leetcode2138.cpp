class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>ans;
        for(int i = 0;i<s.length();i += k){
          int j = 0;
          string p;
          p = "";
          while(j < k){
            if(i + j < s.length()){
              p += s[i + j];
            }else{
              p += fill;
            }
            j ++;
          }
          ans.push_back(p);
        }
      return ans;
    }
};
