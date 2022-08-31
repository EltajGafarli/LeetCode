class Solution {
public:
    int maxDepth(string s) {
      int max_num = 0;
      stack<char>st;
      for(int i = 0;i<s.length();i++){
        if(s[i] == '('){
          st.push(s[i]);
        }else if(s[i] == ')'){
          int size = st.size();
          max_num = max(max_num,size);
          st.pop();
        }
      }
      
      return max_num;
    }
};
