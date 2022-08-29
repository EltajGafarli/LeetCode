class Solution {
    public String restoreString(String s, int[] indices) {
      HashMap<Integer,Character>map = new HashMap<>();
      for(int i = 0; i < indices.length; i++){
        map.put(indices[i],s.charAt(i));
      }
      Set<Integer>keys = map.keySet();
      String res = "";
      for(Integer i : keys){
        res += map.get(i);
      }
      return res;
    }
}
