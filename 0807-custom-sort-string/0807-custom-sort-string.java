class Solution {
    public String customSortString(String order, String s) {
        int[] mp = new int[26];
        for(char ch:s.toCharArray()){
            mp[ch-'a'] += 1;
        }
        
        // System.out.println("2");
        StringBuilder result = new StringBuilder();
        for(char ch:order.toCharArray()){
            while(mp[ch- 'a'] > 0){
                result.append(ch);
                mp[ch- 'a'] --;
            }
        }
        // System.out.println("3");
        for(int i = 0;i<26;i++){
            while(mp[i] > 0){
                result.append((char)(i + 'a'));
                mp[i] --;
            }
        }

        // System.out.println("4");
        return result.toString();
    }
}