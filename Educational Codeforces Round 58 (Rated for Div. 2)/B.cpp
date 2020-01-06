
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    int sz=s.size();
    int back_st=0,col_st=0,cnt=0,ans=-1,sav_cnt=0,col_end=0;
    for(int i=0; i<sz; i++)
    {
        if(col_st==0)
        {
            if(s[i]=='[')
            {
                back_st=1;
            }
            if(back_st==1&&s[i]==':')
            {
                col_st=1;
            }
        }
        else
        {
            if(s[i]=='|')
            {
                cnt++;
            }
            if(s[i]==':')
            {
                sav_cnt=cnt;
                col_end=1;
            }
            if(s[i]==']'&&col_end==1)
            {
                ans=sav_cnt;
            }
        }
    }
    if(ans<0)
    {
        cout<<ans;
    }
    else
    {
        cout<<(ans+4);
    }
 
 
    return 0;
}
