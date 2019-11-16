#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tC;
    cin>>tC;
    bool hor[101],ver[101];
    for(int i=0;i<101;i++)
    {
        hor[i]=ver[i]=false;
    }
    int x, y;
    for(int i=0;i<tC;i++)
    {
        cin>>x>>y;
        hor[y]=true;
        ver[x]=true;
    }
    x=y=0;
    for(int i=0;i<101;i++)
    {
        if(hor[i]) x++;
        if(ver[i]) y++;
    }
    int min=x>y?y:x;
    cout<<min<<endl;
    return 0;
}