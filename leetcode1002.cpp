class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
      vector<int>hash1(26,0);
      vector<int>hash2(26,0);
      vector<string>ans;
      string first_word = words[0];
      for(int i = 0; i < first_word.length();i++){
        hash1[first_word[i] - 'a'] ++;
      }
      for(int i = 1;i < words.size();i++){
        string temp = words[i];
        for(int j = 0;j<temp.size();j ++){
          hash2[temp[j] - 'a'] ++;
        }
        for(int i = 0;i<26;i++){
        hash1[i] = min(hash1[i],hash2[i]);
        hash2[i] = 0;
        
      }
      }
      
      
      for(int i = 0;i<26;i++){
        if(hash1[i] > 0){
          int count = hash1[i];
          while(count -- > 0){
            char x = i + 'a';
            string p = "";
            p = x;
            ans.push_back(p);
          }
        }
      }
    
      return ans;
    }
};
