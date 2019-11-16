#include<bits/stdc++.h>
using namespace std;

int main()
{
    int bill[]={100,20,10,5,1};
    int money,i=0;
    int bills=0;
    cin>>money;
    while(money>0)
    {
        bills+=money/bill[i];
        money=money%bill[i];
        i++;
    }
    cout<<bills<<endl;
    return 0;
}