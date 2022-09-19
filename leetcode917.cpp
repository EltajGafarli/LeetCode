class Solution {
public:
    string reverseOnlyLetters(string s) {
      int left = 0,right = s.length() - 1;
      while(left < right){
        char leftch = s[left];
        char rightch = s[right];
        if(((leftch >= 'a' && leftch <= 'z') || (leftch >= 'A' && leftch <= 'Z')) && ((rightch >= 'a' && rightch <= 'z') || (rightch >= 'A' && rightch <= 'Z'))){
          swap(s[left ++],s[right --]);
        }else if(!((leftch >= 'a' && leftch <= 'z') || (leftch >= 'A' && leftch <= 'Z'))){
          left ++;
        }else{
          right --;
        }
      }
      return s;
    }
};
