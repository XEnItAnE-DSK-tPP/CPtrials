#include<bits/stdc++.h>

using namespace std;

long str2long(string str,int pos)
{
    long num=0;
    for(int i=0;i<pos;i++)num=(num*10)+(long)(str[i]-'0');
    for(int i=pos+1;i<str.length();i++)num=(num*10)+(long)(str[i]-'0');
    return num;
}

int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        string number="";
        cin>>number;
        long min=INT_MAX;
        for(int i=0;i<number.length();i++)
        {
            if(min>str2long(number,i))min=str2long(number,i);
        }
        cout<<min<<endl;
    }
    return 0;
}