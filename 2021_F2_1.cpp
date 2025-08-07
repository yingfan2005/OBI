#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int num;
    for(int i=0;i<4;i++)
    {
        cin>>num;
        v.push_back(num);
    }
    sort(v.begin(),v.end());
    int dif;
    int a=v[0]+v[3];
    int b=v[1]+v[2];
    if(a>b)
    {
        dif=a-b;
    }
    else
    {
        dif=b-a;
    }
    cout<<dif<<"\n";

    return 0;
}
