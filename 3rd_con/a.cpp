#include<bits/stdc++.h>
using namespace std;

deque<char> d2;
int m1,m2;
string s1,s2;

int wherest()
{
    for(int i=0;i<m1;i++)
    {
        if(s1[i]=='*')
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    cin>>m1>>m2;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<m2;i++)
    {
        d2.push_back(s2[i]);
    }
    int st=wherest();
    if(st==-1)
    {
        if(s1==s2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    else
    {
        for(int i=0;i<st;i++)
        {
            if(d2.size()>0&&s1[i]==d2.front())
            {
                d2.pop_front();
            }
            else
            {
                printf("NO\n");
                return 0;
            }
        }
        for(int i=m1-1;i>st;i--)
        {
            if(d2.size()>0&&s1[i]==d2.back())
            {
                d2.pop_back();
            }
            else
            {
                printf("NO\n");
                return 0;
            }
        }
        int k=d2.size();
        if(k)
        {
            for(int i=0;i<k;i++)
            {
                char ch=d2.front();d2.pop_front();
                if(!(ch>='a'&&ch<='z'))
                {
                    printf("NO\n");
                    return 0;
                }
            }
        }
        printf("YES\n");
    }
    return 0;

}
