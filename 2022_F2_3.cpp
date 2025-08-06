#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ini;
    int fim;
    int k;
    int flag=1;
    int res=1;
    for(ini=0;ini<n;ini++)
    {
        for(fim=ini;fim<n;fim++)
        {
            flag=1;
            for(k=ini;k<=fim;k++)
            {
                if(s[k]!=s[ini+fim-k])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                {
                    res=max(res,fim-ini+1);
                }    
        }
    }
    cout<<res<<"\n";
    return 0;
}
