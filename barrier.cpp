#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0,h=0,y1=0,y2=0,l=0,i=0,count=0;
        cin>>n>>h>>y1>>y2>>l;
        for(i=0;i<n;i++)
        {
            int type=0,x=0;
            cin>>type>>x;
            if(type==1&&(x+y1<h))l--;
            if(type==2&&x>y2)l--;
            if(l==0)count++;
        }
        cout<<count<<endl;
    }
    return 0;
}