#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    int mx=0,tmp;
    vector < int > ary;
    map < int,int > mp;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        ary.push_back(tmp);
        mp[tmp]++;
        if(mx<mp[tmp]){mx=mp[tmp];}
    }
    if(mx>k){cout<<"NO\n";return 0;}
    int usng=1;
    map < int,int >mp1;
    for(int i=0;i<n;i++)
    {
        mp1[ary[i]]=0;
    }
    cout<<"YES\n";
 
    for(int i=0;i<n;i++)
    {
        if(mp1[ary[i]]!=0)
        {
            mp1[ary[i]]=(mp1[ary[i]]+1)%k;
            if(mp1[ary[i]]==0){mp1[ary[i]]=k;}
            cout<<mp1[ary[i]];
        }
        else
        {
            mp1[ary[i]]=usng%k;
            if(mp1[ary[i]]==0){mp1[ary[i]]=k;}
            cout<<mp1[ary[i]];
            usng=(usng+mp[ary[i]])%k;
            if(usng==0)usng=k;
        }
        cout<<" ";
    }
 
 
    return 0;
}
