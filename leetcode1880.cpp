class Solution {
public:
    int convertToNumber(string word){
      int ans = 0;
      for(int i = 0;i<word.length();i++){
        ans = 10 * ans + (word[i] - 'a');
      }
      return ans;
    }
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
      return convertToNumber(firstWord) + convertToNumber(secondWord) == convertToNumber(targetWord);
    }
};
