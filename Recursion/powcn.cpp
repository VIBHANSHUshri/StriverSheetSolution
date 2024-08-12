class Solution {
public:
    double myPow(double x, int n) {

          return ans(x,static_cast<long>(n));  
    }

    double ans(double x , long n){
        if(n == 0)
        {
            return 1;
        }
        if(n < 0)
        {
            return 1.0 / ans(x, -n);
        }
        if(n %2 == 1)
        {
            return x * ans(x * x , (n-1)/2);
        }
        else{
            return ans(x * x , n /2);
        }
    } 
};