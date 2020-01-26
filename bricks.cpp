#include <bits/stdc++.h>

using namespace std;

int min(int a,int b)
{
    if(a>b)return b;
    else return a;
}

int calc(int s, int* arr,int l,int u)
{
    if(l>u)return 0;
    else
    {
        int sum=0;
        for(int i=l;i<=u;i++)sum+=arr[i];
        if(sum<s)return 1;
        else
        {
            return 1+min(calc(s,arr,l,u-1),calc(s,arr,l+1,u));
        }
    }
}

int main()
{
    int t,s;
    int w[3]={0};
    cin>>t;
    while(t--)
    {
        cin>>s>>w[0]>>w[1]>>w[2];
        cout<<calc(s,w,0,2)<<endl;
    }
    return 0;
}