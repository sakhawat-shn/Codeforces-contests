#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        scanf("%d %d",&n,&k);

        for(int j=0;j<n;j++)
        {
            printf("%c",('a'+(j%k)));
        }
        printf("\n");
    }


    return 0;
}
