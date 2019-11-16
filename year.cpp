#include<bits/stdc++.h>

using namespace std;

bool distDig(int n)
{
    int ar[10]={0};
    while(n>0)
    {
        ar[n%10]++;
        n=n/10;
    }
    for(int i=0;i<10;i++)
    {
        if(ar[i]>1)
        {
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    int year;
    cin>>year;
    for(int i=year+1;true;i++)
    {
        if(distDig(i)==true)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}