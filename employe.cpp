#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=1;
    cin>>n;
    for(int j=2;j<=n;j++)
    {
        int count=0;
        while(n%j==0){n=n/j;count++;}
        ans*=(count+1);
    }
    ans--;
    cout<<ans<<endl;
    return 0;
}