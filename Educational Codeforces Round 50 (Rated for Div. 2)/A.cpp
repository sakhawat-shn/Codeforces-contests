#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
    long long int n,k;
    cin>>n>>k;
    long long int ans=k/n;
    if(!(ans*n==k))
    {
        ans++;
    }
    cout<<ans<<"\n";
 
 
    return 0;
}
