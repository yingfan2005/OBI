#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0)
    {
        cout<<'*'<<"\n";
        cout<<'*'<<"\n";
    }
    else if(n>0&&n<=5)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<'I';
        }
        cout<<"\n";
        cout<<'*'<<"\n";
    }
    else
    {
        for(int i=1;i<=5;i++)
        {
            cout<<'I';
        }
        cout<<"\n";
        for(int i=6;i<=n;i++)
        {
            cout<<'I';
        }
        cout<<"\n";
    }
    return 0;
}
