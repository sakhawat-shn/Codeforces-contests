#include<bits/stdc++.h>
using namespace std;

int main()
{
    string tbl;
    cin>>tbl;
    map< char,int > mp;
    for(int i=0;i<5;i++)
    {
        string st;
        cin>>st;
        mp[st[0]]=1;
        mp[st[1]]=1;
    }

    if(mp[tbl[0]]==1||mp[tbl[1]]==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }


    return 0;
}
