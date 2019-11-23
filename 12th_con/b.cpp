#include<bits/stdc++.h>
using namespace std;
#define LLD long long int

//map< std::pair<int, int>, string> testMap;
//testMap[std::make_pair(1,3)] = "Hello";

int main()
{
    int n;
    cin>>n;
    LLD obel[n+10][2],clu[n+10][2],tmp1,tmp2;
    for(int i=0;i<n;i++)
    {
        cin>>obel[i][0]>>obel[i][1];
    }
    for(int i=0;i<n;i++)
    {
        cin>>clu[i][0]>>clu[i][1];
    }
    map< pair<LLD,LLD>, LLD > mp;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            mp[make_pair((obel[i][0]+clu[j][0]),(obel[i][1]+clu[j][1]))]++;
        }
    }

    for(auto i=mp.begin();i!=mp.end();i++)
    {
        tmp1=(i->second);

        if(tmp1==n)
        {
            pair<LLD,LLD> ppr=(i->first);
            cout<<(ppr.first)<<" "<<(ppr.second)<<"\n";
            return 0;
        }
    }


    return 0;
}
