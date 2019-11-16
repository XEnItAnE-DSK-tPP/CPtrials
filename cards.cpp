#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str[6];
    for(int i=0;i<6;i++) cin>>str[i];
    bool play=false;
    for(int i=1;i<6;i++)
    {
        if(str[i][0]==str[0][0]||str[i][1]==str[0][1])
        {
            play=true;
            break;
        }
    }
    if(play) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}