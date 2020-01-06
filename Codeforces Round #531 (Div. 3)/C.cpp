#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int win_flag=(b>c);
    int ar[a],ans=0,tmp;
    for(int i=0;i<a;i++)
    {
        cin>>ar[i];
    }
    if(b>c){cout<<a;}
    else
    {
        int cnt=0;
        for(int i=0;i<a;i++)
        {
            if(ar[i]<=b){cnt++;}
        }
        int p=cnt/2;
        if((p*2)!=cnt){p++;}
        cout<<p;
    }
    return 0;
}
