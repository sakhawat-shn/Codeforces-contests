#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[300];
    int len;
    scanf("%s",str);
    len=strlen(str);
    int row=len/20;
    if(row*20<len)
    {
        row++;
    }
    int col=len/row;
    if(col*row<len)
    {
        col++;
    }
    int star=(row*col)-len;
    int pos=0,k=0;
    if(star!=0)
    {
        k=1;
    }
    //printf("%d len",len);
    printf("%d %d\n",row,col);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(j==0&&star!=0)
            {
                printf("*");
                star=star-1;
            }
            else
            {
                printf("%c",str[pos]);
                pos++;
            }
        }
        k++;
        printf("\n");
    }


    return 0;
}
