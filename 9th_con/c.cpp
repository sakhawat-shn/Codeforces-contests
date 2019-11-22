#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    long long ans[n+10];
    for(int i=0;i<n+2;i++){ans[i]=0;}
    for(int i=n;i>n/2;i--)
    {
        scanf("%lld",&ans[i]);
    }
    for(int i=n-1;i>n/2;i--)
    {
        if(ans[i]>ans[i+1])
        {
            long long int tmp=ans[i]-ans[i+1];
            ans[i]=ans[i]-tmp;
            ans[n-i+1]=ans[n-i+1]+tmp;
        }
    }

    if(ans[n/2]>ans[(n/2)+1])
    {
        long long int tmp=ans[n/2];
        ans[n/2]=ans[(n/2)+1];
        ans[(n/2)+1]=tmp;
    }

    for(int i=1;i<=n;i++)
    {
        printf("%lld ",ans[i]);
    }

    return 0;
}
