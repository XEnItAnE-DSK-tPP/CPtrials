#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,k;
    cin>>n>>p>>k;
    if(k+1<p) cout<<"<< ";
    int i;
    for(i=p-k;i<p;i++)
    {
        if(i>0) cout<<i<<" ";
    }
    cout<<"("<<p<<") ";
    for(i=p+k;i>p;i--)
    {
        if((2*p)+k+1-i<n+1) cout<<(2*p)+k+1-i<<" ";
    }
    if(p+k<n) cout<<">>";
    return 0;
}