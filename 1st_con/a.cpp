#include<stdio.h>

int main()
{
    int m,n,i,j;
    scanf("%d %d",&n,&m);
    int game[n+1],walet[m+1];

    for(i=0;i<n;i++)
    {
        scanf("%d",&game[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&walet[i]);
    }
    walet[i]=0;

    i=j=0;
    for(i=0;i<n;i++)
    {
        if(game[i]<=walet[j])
        {
            j++;
        }
    }
    printf("%d\n",j);

    return 0;
}
