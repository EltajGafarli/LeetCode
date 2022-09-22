class Solution {
public:
  
  int sum(vector<int>vect){
    int s = 0;
    for(auto x : vect){
      s += x;
    }
    return s;
  }
  
  int maximumWealth(vector<vector<int>>& accounts) {
    int mx = 0;
    for(int i = 0;i < accounts.size(); i ++){
      mx = max(mx,sum(accounts[i])); 
    }
    return mx;
  }
};
