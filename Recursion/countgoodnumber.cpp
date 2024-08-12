#define mod 1000000007
class Solution {
public:
    
long long power(long long a, long long b){
    long long res = 1;
    while(b){
        if(b & 1){
            res *= a;
        }
        a *= a;
        res %= mod;
        a %= mod;
        b /= 2;
    }
    return res;
}

 
    int countGoodNumbers(long long n) {
          return (power(5,(n/2 + n%2))%1000000007 * power(4,(n/2))) %1000000007;
    }
};