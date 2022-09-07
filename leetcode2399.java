class Solution {
    public boolean checkDistances(String s, int[] distance) {
      HashMap<Character,Integer>map = new HashMap<Character,Integer>();
      for(int i = 0;i<s.length();i++){
        if(!map.containsKey(s.charAt(i))){
          map.put(s.charAt(i),i);
        }else{
          map.put(s.charAt(i),i - 1 - map.get(s.charAt(i)));
        }
      }
      for(Character ch : map.keySet()){
        if(distance[ch - 'a'] != map.get(ch)){
          return false;
        }
      }
      return true;
    }
}
