#include<stdio.h>
#include<string.h>
 
char ch[1000000];
 
int main()
{
    int pos_fst2,num_fst0,num_1,i,len;
    scanf("%s",ch);
    len=strlen(ch);
    pos_fst2=len;
 
 
    for(i=0;i<len;i++)
    {
        if(ch[i]=='2')
        {
            pos_fst2=i;
            break;
        }
    }
 
    num_1=0;
    for(i=0;i<len;i++)
    {
        if(ch[i]=='1')
        {
            num_1++;
        }
    }
 
    num_fst0=0;
    for(i=0;i<pos_fst2;i++)
    {
        if(ch[i]=='0')
        {
            num_fst0++;
        }
    }
 
    for(i=0;i<num_fst0;i++)
    {
        printf("0");
    }
 
    for(i=0;i<num_1;i++)
    {
        printf("1");
    }
 
    for(i=pos_fst2;i<len;i++)
    {
        if(ch[i]=='0'||ch[i]=='2')
        {
            printf("%c",ch[i]);
        }
    }
 
    printf("\n");
 
    return 0;
}
