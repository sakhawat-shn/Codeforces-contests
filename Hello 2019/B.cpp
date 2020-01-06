#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int ang[n];
    for(int i=0;i<n;i++)cin>>ang[i];
 
    int val=0;
    for(int i=0;i<(1<<n);i++)
    {
        val=0;
        int agg=0;
        int k=i;
        for(int j=0;j<n;j++)
        {
 
            agg=agg+(ang[j]*(((k>>j)&1)?-1:1));
        }
        agg=agg%360;
        if(agg==0)
        {
            printf("YES\n");
            return 0;
        }
 
    }
    printf("NO\n");
 
 
    return 0;
}
