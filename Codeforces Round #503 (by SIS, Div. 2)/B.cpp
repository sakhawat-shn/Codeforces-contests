#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    scanf("%d",&n);
    int ara[n+10];
 
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&ara[i]);
    }
    
    int flag=0;
 
    for(int i=1;i<=n;i++)
    {
        map<int,int> mp;
        int next;
        mp[i]=1;
        next=ara[i];
        while(1)
        {
            mp[next]++;
            if(mp[next]==2)
            {
                break;
            }
            next=ara[next];
        }
        
        if(flag)
        {
			printf(" ");
		}
 
        printf("%d",next);
        flag=1;
    }
 
    return 0;
}
