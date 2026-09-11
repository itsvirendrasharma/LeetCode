class Solution {
public:
    string sortVowels(string s) {
     int f[128] = {};
     string v = "AEIOUaeiou";

     for(char c:s)
     if(v.find(c) != string ::  npos)
     f[c]++;

     int j = 0;
     for(char & c:s){
        if(v.find(c) != string :: npos){
            while (f[v[j]] == 0) j++;
            c = v[j];
            f[v[j]]--;
        }
     } 
     return s;
    }
};