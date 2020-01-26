#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0,m=0;
        cin>>n>>m;
        int x=0,y=0,s=0;
        cin>>x>>y>>s;
        int a=1,b;
        int hsum=0,vsum=0;
        for(int i=0;i<x;i++)
        {
            cin>>b;
            hsum+=(b-a)/s;
            a=b;
        }
        for(int i=0;i<y;i++)
        {
            cin>>b;
            vsum+=(b-a)/s;
            a=b;
        }
        cout<<hsum*vsum<<endl;
    }
    return 0;
}