#include<iostream>
#include<bits/stdc++.h>
const int MAXN = 1000;
using namespace std;
int a[MAXN];
int c[MAXN];

void Plus(int *a,int *c)
{
    int jw=0;
    for(int i=1;i<=MAXN;i++)
    {
        c[i]+=a[i]+jw;
        jw=c[i]/10;
        c[i]%=10;
    }
}

void Factorial(int *a,int c)
{
    int jw=0;
    for(int i=1;i<=MAXN;i++)
    {
        a[i]=a[i]*c+jw;
        jw=a[i]/10;
        a[i]%=10;
    }
}

int main()
{
    memset(a,0,sizeof(a));
    memset(c,0,sizeof(c));
    int n;
    cin>>n;
    a[1]=1;
    for(int i=1;i<=n;i++)
    {
        Factorial(a,i);
        Plus(a,c);
    }
    bool flag=0;
    for(int i=MAXN;i>=1;i--)
    {
        if(c[i]!=0) flag=1;
        if(flag) cout<<c[i];
    }
}
