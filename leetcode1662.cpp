class Solution {
public:
  string concat(vector<string>words){
    string ans = "";
    for(auto word : words){
      ans += word;
    }
    return ans;
  }
    
  bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    return concat(word1) == concat(word2);
  }
};
