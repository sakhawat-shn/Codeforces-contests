#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    bool mark;
    node *nxt[26+1];
    node()
    {
        mark=false;
        for(int i=0;i<26;i++)
            nxt[i]=NULL;
    }
} *root1,*root2,*root3,*root4,*root5,*root6,*root7,*root8;

void insrt(string str,node *curr)
{

    for(int i=0;i<str.length();i++)
    {
        int id=str[i]-'0';
        if(curr->nxt[id]==NULL)
            curr->nxt[id]=new node();
        curr=curr->nxt[id];
    }
    curr->mark=1;
}

void del(node *cur)
{
    for(int i=0;i<26;i++)
        if(cur->nxt[i])
            del(cur->nxt[i]);
    delete(cur);
}

int chk(string str,node *curr)
{

}


int main()
{


    return 0;
}
