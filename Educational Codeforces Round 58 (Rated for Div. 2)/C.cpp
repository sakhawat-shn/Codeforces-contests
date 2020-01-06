
#include<bits/stdc++.h>
using namespace std;
#define mkp make_pair
#define pb push_back
 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector < pair< int,int > > vc1,vc2;//pair dekhte hbe...i to s
        map < pair< int,int > , int > mp;//eta dekhte hobe ekbar.....
        for(int j=0;j<n;j++)
        {
            int a,b;
            cin>>a>>b;
            vc1.pb(mkp(a,b));
            vc2.pb(mkp(a,b));
        }
        sort(vc1.begin(),vc1.end());
        int len=vc1.size();
        int now_max=vc1[0].second,now_putting=1;
        mp[mkp(vc1[0].first,vc1[0].second)]=1;
        for(int j=1;j<len;j++)
        {
            if(vc1[j].first<=now_max)
            {
                mp[mkp(vc1[j].first,vc1[j].second)]=now_putting;
            }
            else
            {
                now_putting=2;
                mp[mkp(vc1[j].first,vc1[j].second)]=now_putting;
            }
            now_max=max(now_max,vc1[j].second);
        }
        if(now_putting!=2)
        {
            cout<<"-1\n";
        }
        else
        {
            for(int j=0;j<len;j++)
            {
                cout<<mp[vc2[j]]<<" ";
            }
            cout<<"\n";
        }
    }
 
    return 0;
}
