class Solution {
    public boolean halvesAreAlike(String s) {
      int ans = 0;
      HashMap<Character,Integer>vowels = new HashMap<>();
      vowels.put('a',1);
      vowels.put('e',1);
      vowels.put('o',1);
      vowels.put('i',1);
      vowels.put('u',1);
      vowels.put('A',1);
      vowels.put('E',1);
      vowels.put('O',1);
      vowels.put('U',1);
      vowels.put('I',1);
      for(int i = 0;i<s.length();i++){
        if(i < s.length() / 2){
          if(vowels.containsKey(s.charAt(i))){
            ans++;
          }
        }else{
          if(vowels.containsKey(s.charAt(i))){
            ans --;
          }
        }
      }
      return ans == 0;
    }
}
