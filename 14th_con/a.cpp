#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=(1+n)*n;
    sum=sum/2;
    if(sum%2)
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }


    return 0;
}
