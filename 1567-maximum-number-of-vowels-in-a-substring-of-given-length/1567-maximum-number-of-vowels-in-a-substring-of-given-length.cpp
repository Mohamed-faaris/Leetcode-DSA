int isvowel(int ch)
{
  int c = toupper(ch);
  return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

class Solution {
public:
    int maxVowels(string s, int k) {
        int l , r;
        l = r = 0;
        int c = 0, maxC = 0;
        while((r - l) < k)
        { 
            if(isvowel(s[r])) c++;
            r++;
           //cout<<s[l]<<s[r]<<c<<"\n";
        }
        while(r < s.length()) 
        {
            maxC = max(c,maxC);
            c -= isvowel(s[l++]);
            c += isvowel(s[r++]);
            //cout<<s[l]<<s[r]<<c<<"\n";
        }
        return max(c,maxC);
    }
};