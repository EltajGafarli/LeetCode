class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
      vector<string>codes{
          ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
      };
      set<string>result;
      for(auto word : words){
        string s = "";
        for(int j = 0;j<word.length();j++){
          int index =  int(word[j]) - 97;
          s += codes[index];
        }
        result.insert(s);
      }
      return result.size();
    }
};
