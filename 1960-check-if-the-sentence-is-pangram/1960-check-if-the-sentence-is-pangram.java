class Solution {
    public boolean checkIfPangram(String sentence) {
        boolean[] arr = new boolean[26];
        int count = 0;
        for(char c:sentence.toCharArray()){
            if(!arr[c-'a']) count++;
            if(count == 26) return true;
            arr[c-'a'] = true;
        }
        return false;
    }
}