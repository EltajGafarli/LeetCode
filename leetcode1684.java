class Solution {
    public int countConsistentStrings(String allowed, String[] words) {
      int count = 0;
      HashMap<Character,Integer>map = new HashMap<>();
      for(int i = 0; i < allowed.length(); i++){
        map.put(allowed.charAt(i),1);
      }
      for(String word : words){
        boolean isDistinct = true;
        for(int i = 0;i < word.length() ; i++){
          if(!map.containsKey(word.charAt(i))){
            isDistinct = false;
            break;
          }
        }
        if(isDistinct){
          count ++;
        }
      }
      return count;
    }
}
