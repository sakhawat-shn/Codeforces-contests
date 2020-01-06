#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        long long int l,r,d;
        cin>>l>>r>>d;
        long long int ans;
        if(d>=l&&d<=r)
        {
            ans=r/d;
            ans++;
            ans=ans*d;
            cout<<ans<<"\n";
            continue;
        }
        else
        {
            cout<<d<<"\n";
        }
 
 
 
    }
 
 
    return 0;
}
