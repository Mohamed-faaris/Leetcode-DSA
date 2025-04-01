int isvowel(int ch)
{
  int c = toupper(ch);
  return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

class Solution {
public:
    string reverseVowels(string s) {
        int l = 0,r = s.length()-1;
        while(l<r)
        {
            if(isvowel(s[l])){
                while(l<r && !isvowel(s[r])) r--;
                swap(s[l],s[r--]);
            }
            l++;
        }
        return s;
    }
};