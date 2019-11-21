#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ary[200],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    int max_con=0,now_con=0;

    for(int i=0;i<n-1;i++)
    {
        if(ary[i]==ary[i+1]-1)
        {
            now_con++;
        }
        else
        {
            if(max_con<=now_con&&now_con!=0)
            {
                max_con=now_con+1;
            }
            now_con=0;
        }
    }
    if(max_con<=now_con&&now_con!=0)
            {
                max_con=now_con+1;
            }
            now_con=0;

    int int_max=0,xt_max=0;

    if(ary[0]==1)
    {
        for(int i=0;i<n-1;i++)
        {
            if(ary[i]==ary[i+1]-1)
            {
                int_max++;
            }
            else
            {

                break;
            }
        }
        int_max++;
    }
    if(ary[n-1]==1000)
    {
        for(int i=n-1;i>0;i--)
        {
            if(ary[i]==ary[i-1]+1)
            {
                xt_max++;
            }
            else
            {

                break;
            }
        }
        xt_max++;
    }
    int result=0;
    int org_max=0;
    org_max=(int_max>xt_max?int_max:xt_max);
    if(max_con==0)
    {
        result=0;
    }
    else if(org_max==max_con)
    {
        result=max_con-1;
    }
    else
    {
        result=max_con-2;
    }
    printf("%d\n",result);

    return 0;
}
