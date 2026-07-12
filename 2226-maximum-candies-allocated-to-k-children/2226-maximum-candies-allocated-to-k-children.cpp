class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long totalCandies = accumulate(candies.begin(), candies.end(), 0LL);
    if (totalCandies < k){
        return 0;
    }
    int left = 1;
    int right = *max_element(candies.begin(), candies.end());
    int ans = 0;

    while(left <= right){
        int mid = left + (right - left)/2;

        long long childrenFed = 0;
        for(int pile : candies){
            childrenFed += (pile / mid);
        }
        if(childrenFed >= k){
            ans = mid;
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return ans;
   } 
};