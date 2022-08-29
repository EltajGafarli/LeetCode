class Solution {
public:
    string interpret(string command) {
        string result = "";
        for(int i = 0;i<command.length();i++){
          if(command[i] == 'G'){
            result += 'G';
          }else if(command[i] == 'a'){
            result += "al";
            i += 2;
          }else if(command[i] == ')'){
            result += 'o';
          }
        }
      return result;
    }
};
