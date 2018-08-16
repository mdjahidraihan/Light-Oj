#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;
char s1[300], a[300],b[10],c[10],d[10],e[10];
int change(char s1[])
{
    int res=0;
    int l=strlen(s1);
    for(int i=0;i<l;i++)
        res=(res*2+s1[i])-'0';
    return res;
}
int main()
{
    int T,j,l,k,i,t1,t2,t3,t4,d1,d2,d3,d4;
    char s[300];
    scanf("%d",&T);
    for(k=1;k<=T;k++)
    {
        scanf("%s",a);
        scanf("%s",s);
        j=0;
        l=strlen(a);
        for(i=0;;i++)
        {
            if(a[i]=='.')
            {
                b[j]='\0';
                break;
            }
            else
            {
                b[j]=a[i];
                j++;
            }
        }
        j=0;
        for(i=i+1;;i++)
        {
            if(a[i]=='.')
            {
                c[j]='\0';
                break;
            }
            else
            {
                c[j]=a[i];
                j++;
            }
        }
        j=0;
        for(i=i+1;;i++)
        {
            if(a[i]=='.')
            {
                d[j]='\0';
                break;
            }
            else
            {
                d[j]=a[i];
                j++;
            }
        }
        j=0;
        for(i=i+1;i<l;i++)
        {
 
                e[j]=a[i];
                j++;
        }
        e[j]='\0';
        d1=atoi(b);
        d2=atoi(c);
        d3=atoi(d);
        d4=atoi(e);
        j=0;
        l=strlen(s);
        for(i=0;;i++)
        {
            if(s[i]=='.')
            {
                s1[j]='\0';
                break;
            }
            else
            {
                s1[j]=s[i];
                j++;
            }
        }
        t1=change(s1);
        j=0;
        for(i=i+1;;i++)
        {
            if(s[i]=='.')
            {
                s1[j]='\0';
                break;
            }
            else
            {
                s1[j]=s[i];
                j++;
            }
        }
        t2=change(s1);
        j=0;
        for(i=i+1;;i++)
        {
            if(s[i]=='.')
            {
                s1[j]='\0';
                break;
            }
            else
            {
                s1[j]=s[i];
                j++;
            }
        }
        t3=change(s1);
        j=0;
        for(i=i+1;i<l;i++)
        {
                s1[j]=s[i];
                j++;
        }
        s1[j]='\0';
        t4=change(s1);
        if(d1==t1 && d2==t2 && d3==t3&&d4==t4)
            printf("Case %d: Yes\n",k);
        else
          printf("Case %d: No\n",k);
    }
    return 0;
}
 