class Solution {
public:
  
  static int countOfWords(string s){
    int count = 1;
    for(int i = 0;i<s.length() ; i++){
      if(s[i] == ' ' || s[i] == '-'){
        count ++;
      }
    }
    return count;
  }
  
  int mostWordsFound(vector<string>& sentences) {
    int most = 0;
    for(auto s:sentences){
      most = max(most,countOfWords(s));
    }
    return most;
  }
};
