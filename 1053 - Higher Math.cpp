#include<stdio.h>
#include<math.h>
void calculation(int i,long long j,long long k,long long l)
{
    if(j>=k&&j>=l){
    if((j*j)==(k*k)+(l*l))
    printf("Case %d: yes\n",i);
    else
    printf("Case %d: no\n",i);}
    else if(k>=l&&k>=j)
    if((k*k)==(j*j)+(l*l))
    printf("Case %d: yes\n",i);
    else
    printf("Case %d: no\n",i);
    else if((l*l)==(k*k)+(j*j))
    printf("Case %d: yes\n",i);
    else
    printf("Case %d: no\n",i);
    return ;
 
}
 
int main()
{
 
    long long j,k,l;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld%lld%lld",&j,&k,&l);
        calculation(i,j,k,l);
    }
}