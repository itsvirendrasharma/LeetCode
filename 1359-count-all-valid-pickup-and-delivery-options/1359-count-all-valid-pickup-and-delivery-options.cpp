class Solution {
public:
    int countOrders(int n) {
        long long MOD = 1e9 + 7;
        long long ways = 1;

        for(long long i = 1; i <= n; i++){
            ways = ways * i % MOD;
            ways = ways * (2 * i - 1)%MOD;
        }
        return ways;
    }
};