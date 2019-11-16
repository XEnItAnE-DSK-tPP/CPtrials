#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool hard=false;
    int review;
    for(int i=0;i<n;i++)
    {
        cin>>review;
        if(review==1) hard=true;
    }
    if(hard) cout<<"hard"<<endl;
    else cout<<"easy"<<endl;
    return 0;
}