#include <stdio.h>
#include <string.h>
 
int main ()
{
    int t,s,d=0,i,j,k,opn;
    char a [100];
    scanf ("%d", &t);
    for(i=1;i<=t;i++)
    {
        s=0;
        scanf("%d",&opn);
        int c=0;
        char ch=getchar();
        for(j=1;j<=opn;j++)
        {
 
            scanf ("%s", a);
            if (!strcmp (a, "donate"))
            {
                scanf ("%d", &d);
                s += d;
            }
            else if((!strcmp(a,"report"))&&!c)
            {
                printf ("Case %d:\n",i);
                printf("%d\n",s);
                c++;
            }
            else
                printf("%d\n",s);
        }
 
    }
    return 0;
 
}
 