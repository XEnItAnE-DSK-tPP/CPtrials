#include<bits/stdc++.h>

using namespace std;

class WCount
{
    public:
        string word;
        int spam[2];
        WCount(string str)
        {
            word=str;
            spam[0]=spam[1]=0;
        }
};
typedef vector<WCount> wTable;

int hstr(string str)
{
    int hf=0;
    int n=str.length();
    for(int i=0;i<n;i++)
    {
        hf+=(i+1)*(n-i)*(str[i]-'a'+1)*(26+'a'-str[i]);
        hf=hf%1549;
    }
    return hf;
}

int max(int a,int b)
{
    if(a>b)return a;
    else return b;
}

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        wTable *wlist=new wTable[1549];
        int n=0,sBool=0,ind=0,j=0,sum=0;
        string str;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>str>>sBool;
            ind=hstr(str);
            for(j=0;j<wlist[ind].size();j++)if(wlist[ind][j].word==str)
            {
                wlist[ind][j].spam[sBool]++;
                break;
            }
            if(j==wlist[ind].size())
            {
                WCount tmp(str);
                tmp.spam[sBool]++;
                wlist[ind].push_back(tmp);
            }
        }
        for(int i=0;i<1549;i++)
        {
            for(auto u:wlist[i])
            {
                sum+=max(u.spam[0],u.spam[1]);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}