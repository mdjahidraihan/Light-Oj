#include<stdio.h>
int main()
{
    int num,n;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d",&num);
        if(num<=10)
        printf("%d %d\n",0,num);
        else
        printf("%d %d\n",10,num-10);
        n--;
 
    }
    return 0;
}