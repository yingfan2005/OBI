#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    int i;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
    }
    map<int,int>last_seen_index;
    int left=0;
    int right=0;
    int max_len=0;
    int len=0;
    int current;
    for(right=0;right<n;right++)
    {
        current=v[right];
        if(last_seen_index.count(current)>0&&last_seen_index[current]>=left)
        {
            left=last_seen_index[current]+1;
        }
        last_seen_index[current]=right;
        len=right-left+1;
        max_len=max(len,max_len);
    }
    cout<<max_len<<"\n";
    return 0;
}
