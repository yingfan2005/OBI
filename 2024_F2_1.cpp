#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tam;
    int f0,f1,f2,f3;
    cin>>tam;
    f0=(tam-2)*(tam-2)*(tam-2);
    f1=(tam-2)*(tam-2)*6;
    f2=(tam-2)*4*6/2;
    f3=8;
    cout<<f0<<"\n";
    cout<<f1<<"\n";
    cout<<f2<<"\n";
    cout<<f3<<"\n";
    return 0;
}
