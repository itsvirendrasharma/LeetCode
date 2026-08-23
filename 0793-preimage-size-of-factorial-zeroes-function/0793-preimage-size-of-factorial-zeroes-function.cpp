class Solution {
public:

long long countZeroes(long long n){
    long long cnt = 0;

    while(n>0){
        n /= 5;
        cnt += n;
    }
    return cnt;
}
long long lowerBound(int k){
    long long low = 0, high = 5LL * (k+1);

    while(low < high){
        long long mid = low+(high - low)/2;
    
    if(countZeroes(mid) >= k)
    high = mid;
    else
    low = mid+1;
}
return low;
}
    int preimageSizeFZF(int k) {
        return lowerBound(k+1)-lowerBound(k);
    }
};