class Solution {
    public String decodeMessage(String key, String message) {
      HashMap<Character,Character>map = new HashMap<>();
      String letters = "abcdefghijklmnopqrstuvwxyz";
      int j = 0;
      for(int i = 0;i<key.length(); i++){
        if(key.charAt(i) != ' '){
          if(!map.containsKey(key.charAt(i))){
            map.put(key.charAt(i),letters.charAt(j));
            j ++;
          }
        }
      }
      String result = "";
      for(int i = 0;i<message.length();i++){
        if(message.charAt(i) != ' '){
          result += map.get(message.charAt(i));
        }else{
          result += " ";
        }
      }
      return result;
    }
}
