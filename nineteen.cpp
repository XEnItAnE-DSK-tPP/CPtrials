#include<bits/stdc++.h>
using namespace std;
int min(int arr[]);
int main()
{
    string str;
    cin>>str;
    int qty[4]={0};
    for(int i=0;i<str.length();i++)
    {
        switch(str[i])
        {
            case 'e':
            {
                qty[0]++;
                break;
            }
            case 'i':
            {
                qty[1]++;
                break;
            }
            case 'n':
            {
                qty[2]++;
                break;
            }
            case 't':
            {
                qty[3]++;
                break;
            }
            default:
            {
                break;
            }
        }
    }
    qty[0]/=3;
    qty[2]=(qty[2]-1)/2;
    cout<<min(qty);
    return 0;
}
int min(int arr[])
{
    int min=arr[0];
    for(int i=0;i<4;i++)
    {
        if(min>arr[i]) min=arr[i];
    }
    return min;
}