#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int cnt=0;
    for(int i=1;i<(n-1);i++)
    {
        if(ar[i-1]==1&&ar[i]==0&&ar[i+1]==1)
        {
            cnt++;
            ar[i+1]=0;
        }
    }
    cout<<cnt<<"\n";

    return 0;
}
