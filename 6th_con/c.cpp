#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
template <class T> inline T bigmod(T p,T e,T M)
{
    ll ret = 1LL;
    for(; e > 0LL; e >>= 1LL)
    {
        if(e & 1LL) ret = (ret * p) % M;
        p = (p * p) % M;
    }
    return (T)ret;
}
using namespace std;

int no0[1000000],no1[1000000],data[1000000];

void build1(int at,int L,int R)
{
    if(L==R)
    {
        no1[at]=data[L];
        return;
    }
    int mid=(L+R)/2;
    build1(at*2,L,mid);
    build1(at*2+1,mid+1,R);
    no1[at]=no1[at*2]+no1[at*2+1];
}

void build0(int at,int L,int R)
{
    if(L==R)
    {
        no0[at]=(data[L]?0:1);
        return;
    }
    int mid=(L+R)/2;
    build0(at*2,L,mid);
    build0(at*2+1,mid+1,R);
    no0[at]=no0[at*2]+no0[at*2+1];
}

int query1(int at,int L,int R,int l,int r)
{
    if(r<L||R<l) return 0;
    if(l<=L&&R<=r) return no1[at];
    int mid=(L+R)/2;
    int x=query1(at*2,L,mid,l,r);
    int y=query1(at*2+1,mid+1,R,l,r);
    return x+y;
}

int query0(int at,int L,int R,int l,int r)
{
    if(r<L||R<l) return 0;
    if(l<=L&&R<=r) return no0[at];
    int mid=(L+R)/2;
    int x=query0(at*2,L,mid,l,r);
    int y=query0(at*2+1,mid+1,R,l,r);
    return x+y;
}

int main()
{
    int n,q;
    char ch;
    scanf("%d%d",&n,&q);
    scanf("%c",&ch);
    for(int i=1;i<=n;i++)
    {
        scanf("%c",&ch);
        data[i]=ch-'0';
    }
    build0(1,1,n);
    build1(1,1,n);
    for(int i=0;i<q;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int no_of_1,no_of_0;
        no_of_1=query1(1,1,n,a,b);
        no_of_0=query0(1,1,n,a,b);
        long long ans=0;
        ans=bigmod((long long) 2,(long long) no_of_1,(long long) mod);
        ans=ans-1;
        ans=((ans%mod)*(bigmod((long long) 2,(long long) no_of_0,(long long) mod)%mod)%mod);
        printf("%I64d\n",ans);
    }



    return 0;
}
