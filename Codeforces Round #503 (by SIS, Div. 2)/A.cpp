#include<stdio.h>
#include<stdlib.h>
 
int main()
{
    int n,h,a,b,k;
    scanf("%d%d%d%d%d",&n,&h,&a,&b,&k);
 
    for(int i=1;i<=k;i++)
    {
        int ans=0;
        int x1,x2,y1,y2;
 
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        ans=ans+abs(x1-x2);
 
        if((!(y1>=a&&y1<=b))&&(x1!=x2))
        {
            if(abs(y1-a)<abs(y1-b))
            {
                ans+=abs(y1-a);
                y1=a;
            }
            else
            {
                ans+=abs(y1-b);
                y1=b;
            }
        }
        ans=ans+abs(y1-y2);
        printf("%d\n",ans);
    }
 
    return 0;
}
