#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n,k,ls;
    cin>>n>>k;
 
    ls=n<k?n:k-1;
    long long int ans=(k/2);
    ans++;
 
    if(ans>ls)
    {
        ans=0;
    }
    else
    {
        ans=ls-ans;
        ans++;
    }
    cout<<ans<<"\n";
 
    return 0;
}
