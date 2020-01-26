#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        string state;
        int sa,sb,n;
        cin>>state>>sa>>sb;
        n=state.length();
        for(int i=0;i<state.length();i++)
        {
            if(state[i]=='A')n=n-i;
            if(state[i]=='B')n=(i+1)-(state.length()-n);
        }
        if((n-1)%(sa+sb)==0)cout<<"unsafe"<<endl;
        else cout<<"safe"<<endl;
    }
    return 0;
}