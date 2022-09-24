class Solution {
public:
    int sum(vector<int>vect){
        int s = 0;
        for(auto v : vect){
            if(v % 2 == 0) s += v;
        }
        return s;
    }
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
        int s = sum(nums);
        for(int i = 0; i < queries.size(); i++){
            int val = queries[i][0];
            int index = queries[i][1];
            int num = nums[index];
            if(num % 2 == 0 && val % 2 == 0){
                s += val;
            }else if(num % 2 == 0 &&  abs(val % 2) == 1){
                s -= num;
            }else if(abs(num % 2) == 1 && abs(val % 2) == 1){
                s += num + val;
            }

            nums[index] += val;
            ans.push_back(s);
        }
        return ans;
    }
};
