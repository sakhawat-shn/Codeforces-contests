#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    map< int,int > mp;
 
    for(int i=0;i<n;i++)
    {
        string st;
        cin>>st;
        int sz=st.size();
        int flp=0,fln=0,valp=0,valn=0;
        for(int j=0;j<sz;j++)
        {
            valp=valp+((st[j]=='(')?1:-1);
            if(valp<0)
            {
                flp=1;
            }
        }
        for(int j=sz-1;j>=0;j--)
        {
            valn=valn+((st[j]==')')?1:-1);
            if(valn<0)
            {
                fln=1;
            }
        }
        if((flp+fln)<2)
        {
            if(flp)
            {
                mp[(valp*(-1))]++;
            }
            else if(fln)
            {
                mp[valn]++;
            }
            else
            {
                mp[0]++;
            }
        }
    }
    int ans=0;
    ans=(mp[0]/2);
 
    for(int i=1;i<1000000;i++)
    {
        if(mp[i])
        {
            ans=ans+(min(mp[i],mp[i*(-1)]));
        }
    }
    cout<<ans<<"\n";
 
 
    return 0;
}
