#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,a,b,k;
    cin>>t;
    for(long long i=0;i<t;i++)
    {
        cin>>a>>b>>k;
        long long val=a-b,ans;
        if(k%2==0)
        {
            ans=val*(k/2);
        }
        else
        {
            ans=val*((k-1)/2);
            ans=ans+a;
        }
        cout<<ans<<"\n";
    }

    return 0;
}
