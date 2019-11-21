#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n],ar2[n],max1,max2;
    max1=max2=0;
    ll cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        ar2[i]=ar[i];
        cnt=cnt+ar[i];
    }
    ll arexp[n];
    for(int i=0;i<n;i++)
    {
        arexp[i]=cnt-ar[i];
    }
    sort(ar2,ar2+n);
    max1=ar2[n-1];
    max2=ar2[n-2];
    int ans1=0;
    for(int i=0;i<n;i++)
    {
        if(arexp[i]%2==0)
        {
            if(max1!=ar[i])
            {
                if(max1==(arexp[i]-max1))
                {
                    ans1++;
                }

            }
            else
            {
                if(max2==(arexp[i]-max2))
                {
                    ans1++;
                }
            }
        }
    }
    cout<<ans1<<"\n";
    for(int i=0;i<n;i++)
    {
        if(arexp[i]%2==0)
        {
            if(max1!=ar[i])
            {
                if(max1==(arexp[i]-max1))
                {
                    cout<<(i+1);
                }

            }
            else
            {
                if(max2==(arexp[i]-max2))
                {
                    cout<<(i+1);
                }
            }
            cout<<" ";
        }
    }




    return 0;
}
