#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,mx=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        mx=max(mx,a+b);
    }

    cout<<mx<<"\n";

    return 0;
}
