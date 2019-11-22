#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    char chd;
    scanf("%d",&t);
    scanf("%c",&chd);

    for(int i=0;i<t;i++)
    {
        char st[1100];
        scanf("%s",st);
        int len=strlen(st);
        if(len==1)
        {
            printf("-1\n");
            continue;
        }
        if(st[0]!=st[len-1])
        {
            printf("%s\n",st);
            continue;
        }
        int fst=0,cng,flag=0;
        char tmp;
        for(int j=0;j<len;j++)
        {
            if(st[j]!=st[len-1])
            {
                flag=1;
                tmp=st[0];
                st[0]=st[j];
                st[j]=tmp;
                printf("%s\n",st);
                break;
            }
        }
        if(flag!=1)
        printf("-1\n");

    }

    return 0;
}
