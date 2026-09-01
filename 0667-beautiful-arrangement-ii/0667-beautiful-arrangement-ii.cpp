class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> ans;

        int low = 1;
        int high = n;
        while(low <= high){
            if(k > 1){
                if(k % 2 == 1){
                    ans.push_back(low++);
                }else{
                    ans.push_back(high--);
                }
                k--;
            }else{
                ans.push_back(low++);
            }
        }
        return ans;
    }
};