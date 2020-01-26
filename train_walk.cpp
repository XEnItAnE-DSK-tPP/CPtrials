#include <bits/stdc++.h>

using namespace std;

int mod(int a)
{
    if(a<0)a*=(-1);
    return a;
}

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0,a=0,b=0,c=0,d=0,p=0,q=0,y=0,xa=0,xb=0,xc=0,xd=0,tmp=0;
        cin>>n>>a>>b>>c>>d>>p>>q>>y;
        for(int i=1;i<=n;i++)
        {
            cin>>tmp;
            if(i==a)xa=tmp;
            if(i==b)xb=tmp;
            if(i==c)xc=tmp;
            if(i==d)xd=tmp;
        }
        int dt=mod((xd-xc)*q);
        int dw=mod((xa-xb)*p);
        int dws=mod((xa-xc)*p);
        int dwr=mod((xb-xd)*p);
        if(dws>y)cout<<dw;
        else
        {
            if(dt+dwr+y>dw)cout<<dw;
            else cout<<dt+dwr+y;
        }
        cout<<endl;
    }
    return 0;
}