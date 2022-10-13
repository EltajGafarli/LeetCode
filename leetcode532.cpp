class Solution {
public:
    map<int,int>mp;
    int findPairs(vector<int>& nums, int k) {
      
      for(auto x : nums){
        mp[x] ++;
      }
      int count = 0;
      if(k == 0){
        for(auto x : mp){
          if(mp[x.first] > 1){
            count ++;
          }
        }
        return count;
      }
      for(auto x : mp){
        if(mp[x.first] > 0 && mp[x.first + k] > 0){
          count ++;
        }
      }
      return count;
    }
};
