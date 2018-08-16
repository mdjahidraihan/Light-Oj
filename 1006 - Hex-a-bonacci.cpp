#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long a, b, c, d, e, f;
long long dp[100010];
long long fn( int n )
{
    if( n == 0 ) return a%10000007;
    else if( n == 1 ) return b%10000007;
    else if( n == 2 ) return c%10000007;
    else if( n == 3 ) return d%10000007;
    else if( n == 4 ) return e%10000007;
    else if( n == 5 ) return f%10000007;
    else if(dp[n]!=-1) return dp[n]%10000007;
    else
    {
        dp[n]=((  (   (fn(n-1)%10000007)  ) + ( fn(n-2)%10000007 ) + (fn(n-3)%10000007) + (fn(n-4)%10000007) + (fn(n-5)%10000007) + (fn(n-6)%10000007) ) %10000007 );
        return dp[n]%10000007;
    }
 
}
int main()
{
    long long n,i, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- )
    {
 
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        memset(dp,-1,sizeof(dp));
        printf("Case %lld: %lld\n", ++caseno, fn(n));
    }
    return 0;
}
 