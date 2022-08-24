class Solution {
    public boolean checkIfPangram(String sentence) {
      HashMap<Character,Integer>map = new HashMap<>();
      int count = 0;
      for(int i = 0; i < sentence.length(); i ++){
        if(!map.containsKey(sentence.charAt(i))){
          map.put(sentence.charAt(i),1);
          count ++;
        }
      }
      return count == 26 ? true : false;
    }
}
