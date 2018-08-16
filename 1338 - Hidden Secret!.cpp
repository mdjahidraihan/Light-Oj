#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char a[110],b[110],r1[110],r2[110];
 
int main()
{
    int i,j,k,l,m,n,t;
    scanf("%d",&t);
    char ch=getchar();
    for(m=1;m<=t;m++)
    {
 
            gets(a);
            gets(b);
 
 
        for(i=0,k=0;i<strlen(a);i++)
        {
            if(a[i]<='z'&&a[i]>='A')
            {
                if(a[i]>='a')
                a[i]=a[i]-32;
                r1[k]=a[i];
                k++;
            }
        }
        r1[k]='\0';
        for(i=0,k=0;i<strlen(b);i++)
        {
            if(b[i]<='z'&&b[i]>='A')
            {
                if(b[i]>='a')
                b[i]=b[i]-32;
                r2[k]=b[i];
                k++;
            }
        }
        r2[k]='\0';
        int l1=strlen(r1);
        int l2=strlen(r2);
        int c=0;
        if(l1!=l2)
            printf("Case %d: No\n",m);
        else
        {
 
 
            char temp;
            int l=strlen(r1);
 
            for(i=1;i<l;i++)
                for(j=0;j<l-i;j++)
                    if(r1[j]>r1[j+1])
                    {
                         temp=r1[j];
                        r1[j]=r1[j+1];
                        r1[j+1] =temp;
                    }
 
            for(i=1;i<l;i++)
                for(j=0;j<l-i;j++)
                    if(r2[j]>r2[j+1])
                    {
                        temp=r2[j];
                        r2[j]=r2[j+1];
                        r2[j+1] =temp;
                    }
 
 
            for(i=0;i<l1;i++)
            {
                if(r1[i]==r2[i])
                c=1;
                else
                {
                    c=0;
                    break;
                }
            }
            if(c==0)
                printf("Case %d: No\n",m);
            else
                printf("Case %d: Yes\n",m);
 
        }
    }
 
    return 0;
}