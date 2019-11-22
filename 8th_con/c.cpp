#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int ar[n],ans[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int flag=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j==0)
            {
                ans[j]=i;
            }
            else
            {
                if(ar[j]>ar[j-1])
                {
                    ans[j]=ans[j]+1;
                }

            }
        }
    }


    return 0;
}
