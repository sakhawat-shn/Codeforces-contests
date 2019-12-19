#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int c=n-2;
    c=(c%3==0?n-3:c);
    cout<<"1 "<<(n-(1+c))<<" "<<c<<"\n";
    return 0;
 
}
