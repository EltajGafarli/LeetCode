class Solution {
    public char repeatedCharacter(String s) {
      HashMap<Character,Integer>map = new HashMap<>();
      char ch = ' ';
      for(int i = 0; i < s.length(); i++){
        ch = s.charAt(i);
        if(!map.containsKey(ch)){
          map.put(ch,1);
        }else{
          break;
        }
      }
      return ch;
    }
}
