class Solution {
public:
    int minInsertions(string s) {
        int open = 0;
        int ans = 0;
        int i = 0;

        while(i<s.size()){
            if(s[i] == '('){
                open++;
            }else{

                if(i+1<s.size() && s[i+1] == ')')
                {
                    i++;
                }else{
                    ans++;
                }
            
                open--;

                if(open < 0){
                    ans++;
                    open = 0;
                }
            }
            i++;
        }
        return ans + 2 * open;
    }
};