#include<bits/stdc++.h>
using namespace std;
int fatorial(int n)
{
    int res=1;
    while(n>0)
    {
        res*=n;
        n--;
    }
    return res;
}
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int a,b;
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
    }
    int num;
    int deno1;
    int deno2;
    int res=0;
    for(int i=n-1;i>0;i--)
    {
        num=fatorial(n);
        deno1=fatorial(i);
        deno2=fatorial(n-i);
        res+=num/(deno1*deno2);
    }
    if(m==0)
    {
        res+=1;
    }
    cout<<res-m<<"\n";


    return 0;
}
