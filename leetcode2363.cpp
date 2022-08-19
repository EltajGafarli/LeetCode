//bruteforce algorithm
class Solution {
public:
  
  
  vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
    for(int i = 0;i<items2.size();i++){
      bool k = true;
      for(int j = 0;j<items1.size();j++){
        if(items2[i][0] == items1[j][0]){
          items1[j][1] += items2[i][1];
          k = true;
          break;
        }else{
          k = false;
        }
      }
      if(!k){
        items1.push_back(items2[i]);
      }
    }
    sort(begin(items1),end(items1));
    return items1;
  }
};
