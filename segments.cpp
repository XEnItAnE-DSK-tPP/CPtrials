#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool seg[n][100]={false};
    int a,b,count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        for(int j=0;j<100;j++)
        {
            if(j>=a&&j<b) seg[i][j]=true;
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<100;j++)
        {
            if(seg[i][j]) seg[0][j]=false;
        }
    }
    for(int i=0;i<100;i++)
    {
        if(seg[0][i]) count++;
    }
    cout<<count<<endl;
}