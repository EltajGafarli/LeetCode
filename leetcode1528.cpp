class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
      vector<pair<int,char>>map;
      for(int i = 0;i<indices.size();i++){
        map.push_back(make_pair(indices[i],s[i]));
      }
      sort(begin(map),end(map),[](pair<int,char>p1,pair<int,char>p2){return p1.first < p2.first;});
      string res = "";
      for(auto x : map){
        res += x.second;
      }
      return res;
    }
};
