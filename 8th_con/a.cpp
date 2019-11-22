#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,uniq=0,mx=0,tmp;
    int uton[101]={0};
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&tmp);
        if(uton[tmp]==0)
        {
            uniq++;
        }
        uton[tmp]++;
        if(mx<uton[tmp])
        {
            mx=uton[tmp];
        }
    }
    int koyta=mx/k;
    if(koyta*k!=mx)
    {
        koyta++;
    }
    int tot_dewa=(koyta*k)*uniq;
    printf("%d\n",(tot_dewa-n));

    return 0;
}
