
class Solution {
    public:
      // Function to check if two strings are rotations of each other or not.
      bool areRotations(string &s1, string &s2) {
          // Your code here
          string pat = s2;
          string txt = s1 + s1;
          int k = pat.size();
          vector<int> lps(k,0);
          for(int i=1,len=0; i<k; ) {
              if(pat[i]==pat[len]) {
                  lps[i++] = ++len;
              }
              else if(len) {
                  len = lps[len-1];
              }
              else {
                  lps[i++] = 0;
              }
          }
          
          for(int i=0, j=0; i<txt.size(); ) {
              if(txt[i]==pat[j]) {
                  i++,j++;
                  if(j==k) {
                      return true;
                  }
              }
              else if(j) {
                  j = lps[j-1];
              }
              else {
                  i++;
              }
          }
          
          return false;
      }
  };