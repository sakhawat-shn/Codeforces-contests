#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d",&x);
        int ans=x/7;
        ans++;
        printf("%d\n",ans);
    }


    return 0;
}
