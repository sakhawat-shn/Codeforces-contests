#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    scanf("%d",&n);
    int ar[n+10];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    sort(ar,ar+n);
    int cnt=0;
    for(int i=0;i<n;i=i+2)
    {
        cnt=cnt+(ar[i+1]-ar[i]);
    }
    printf("%d\n",cnt);
 
 
    return 0;
}
