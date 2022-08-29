class Solution {
public:
    vector<string> cellsInRange(string s) {
      vector<string>res;
      for(int i = s[0] - 'A'; i <= s[3] - 'A'; i ++){
        for(int j = s[1] - '1';j <= s[4] - '1'; j++){
          string x;
          x = x + char(i + 65) + char(j + 49);
          res.push_back(x);
        }
      }
      return res;
    }
};
