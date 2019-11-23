#include<bits/stdc++.h>
using namespace std;
#define LLD long long int
#define MOD 998244353

int main()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    char fst=str[0],lst=str[n-1];
    int no_fst=0,no_lst=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]==fst)
        {
            no_fst++;
        }
        else
        {
            break;
        }
    }

    for(int i=n-1;i>=0;i--)
    {
        if(str[i]==lst)
        {
            no_lst++;
        }
        else
        {
            break;
        }
    }
    LLD ans,p,q,r;


    if(str[0]!=str[n-1])
    {
        ans=(LLD)no_fst;
        ans=ans%MOD;
        ans=ans+(LLD)no_lst;
        ans++;

    }
    else
    {
        ans=((LLD)(no_fst+1))*((LLD)(no_lst+1));
        ans=ans%MOD;
    }
    cout<<ans<<"\n";



    return 0;
}
