#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int mx=max(a,max(b,c)),x=0,ans=0;
    for(int i=0;i<=mx;i++)
    {
        x=i;
        if((x<=a)&&(x+1<=b)&&(x+2<=c))
        {
            ans=3*(x+1);
        }
    }
    cout<<ans<<"\n";


    return 0;
}
