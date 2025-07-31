#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int quant;
    cin>>n;
    cin>>quant;
    string obi;
    string input;
    cin>>obi;
    cin>>input;
    int i;
    int j;
    int count=0;
    for(i=0;i<quant;i++)
    {
        for(j=0;j<n;j++)
        {
            if(input[i]==obi[j])
            {
                count++;
                break;
            }
        }
    }
    if(count!=quant)
    {
        cout<<'N'<<"\n";
    }
    else
    {
        cout<<'S'<<"\n";
    }
    return 0;
}
