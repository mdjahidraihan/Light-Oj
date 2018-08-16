#include<cstdio>
#include<cmath>
using namespace std;
#define ifc(n) (flag[n>>5]&(1<<((n>>1)&31)))
#define isc(n) (flag[n>>5]|=(1<<((n>>1)&31)))
#define N 10000000
long long flag[N>>5];
long long   cp[680000];
void sieve()
{
 
    cp[0]=2;
    long long t=1;
    long long i, j, k;
    for(i=3; i<N; i+=2)
    {
        if(!ifc(i))
        {
            cp[t]=i;t++;
            for(j=i*i, k=i<<1; j<N; j+=k)
                isc(j);
        }
    }
    //for(i=0;i<12;i++)
      //  printf("%d  ",cp[i]);
}
int main()
{
    sieve();
    long  long  n;
    long long  j,i,cnt,cases,sq,t;
    //int cases;
    scanf("%lld",&cases);
    for(j=1;j<=cases;j++)
    {
       scanf("%lld",&n);
       cnt=0;
       sq=n/2;
       for(i=0;;i++)
       {
           if(cp[i]>sq)
                break;
            else
            {
                 t=n-cp[i];
 
                if(((t&1)==1&&!ifc(t))||t==2)
                {
                    //printf("%lld  %lld\n",t ,cp[i]);
                    cnt++;
                }
            }
       }
       printf("Case %lld: %lld\n",j,cnt);
    }
    return 0;
}
 