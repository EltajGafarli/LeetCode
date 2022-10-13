class Solution {
public:
  map<int,pair<int, vector<int>>>freq(vector<int>vect){
    map<int,pair<int, vector<int>>>mp;
    for(int i = 0; i < vect.size(); i++){
        int x = vect[i];
        mp[x].first ++;
        mp[x].second.push_back(i);
    }
    return mp;
}

int findShortestSubArray(vector<int>&nums){
    map<int,pair<int, vector<int>>>result = freq(nums);
    int ans = INT_MAX;
    int count = 0;

    for(auto mp : result){
        if(mp.second.first >= count){
            bool equal = false;
            if(mp.second.first == count){
                equal = true;
            }
            count = mp.second.first;
            int size = mp.second.second.size();
            int len = mp.second.second[size - 1] - mp.second.second[0] + 1;
            if(equal){
                if(ans > len){
                    ans = len;
                }
            }else{
                ans = len;
            }
        }
    }
    return ans;

}

};
