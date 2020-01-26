#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t=0,n=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int count[n]={0};
        int pos[n][2]={0};
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(count[c]==1)c=0;
            else c=pos[c][1]-pos[c][0];
            count[c]++;
            pos[c][0]=pos[c][1];
            pos[c][1]=i;
        }
        cout<<count[c];
        cout<<endl;
    }
    return 0;
}