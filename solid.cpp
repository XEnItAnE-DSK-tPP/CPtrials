#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ans=0;
    cin>>n;
    string tmp;
    for(int i=0;i<n;i++)
    {
        cin>>tmp;
        if(tmp=="Tetrahedron") ans+=4;
        else if(tmp=="Cube") ans+=6;
        else if(tmp=="Octahedron") ans+=8;
        else if(tmp=="Dodecahedron") ans+=12;
        else ans+=20;
    }
    cout<<ans<<endl;
    return 0;
}