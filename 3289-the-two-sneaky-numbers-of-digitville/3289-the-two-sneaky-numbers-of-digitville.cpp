class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        vector<int>freq(100, 0);

        for(int num : nums){
            freq[num]++;

            if(freq[num] == 2)
            ans.push_back(num);
        }
        return ans;
    }
};