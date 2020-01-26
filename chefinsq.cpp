#include<bits/stdc++.h>

using namespace std;
typedef long long int lli;

lli nCr(int n, int r)
{
    if(r<=n-r)
    {
        lli ncr=1;
        for(int i=0;i<r;i++)ncr*=(lli)(n-i);
        for(int i=1;i<=r;i++)ncr/=(lli)i;
        return ncr;
    }
}

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        int n=0,k=0;
        cin>>n>>k;
        k--;
        int arr[n]={0};
        for(int i=0;i<n;i++)cin>>arr[i];
        sort(arr,arr+n-1);
        cout<<arr[k]<<"\t";
        int ctake=0,cex=0;
        for(int i=0;i<=k;i++)if(arr[i]==arr[k])ctake++;
        for(int i=k+1;i<n;i++)if(arr[i]==arr[k])cex++;
        lli count=nCr(ctake+cex,cex);
        cout<<count<<endl;
    }
    return 0;
}