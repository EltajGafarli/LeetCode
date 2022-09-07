class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
      int arr[26] = {0};
      for(int i = 0;i<s.length() - 1;i++){
        for(int j = i + 1;j<s.length();j++){
          if(s[i] == s[j]){
            if(distance[s[i] - 'a'] != j - i - 1){
              return false;
            }
          }
        }
      }
      return true;
    }
};
