#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
    int n;
    string str;
    cin>>n>>str;
    lli a=1,b=0,a1=a,nop=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='R'){nop+=a1*b;b=0;}
        if(str[i]=='B'){b=b*2+1;if(i>0&&str[i-1]=='R') a1=a;}
        a*=2;
    }
    nop+=a1*b;
    cout<<nop<<endl;
    return 0;
}