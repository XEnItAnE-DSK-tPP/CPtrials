#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int stx[3]={0},j=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='|') stx[j]++;
        else j++;
    }
    if(stx[0]+stx[1]==stx[2]) cout<<str<<endl;
    else if(stx[0]+stx[1]+2==stx[2])
    {
        for(int i=0;i<=stx[0];i++) cout<<"|";
        cout<<"+";
        for(int i=0;i<stx[1];i++) cout<<"|";
        cout<<"=";
        for(int i=0;i<stx[2]-1;i++) cout<<"|";
        cout<<endl;
    }
    else if(stx[0]+stx[1]-2==stx[2])
    {
        if(stx[0]>1)
        {
            for(int i=0;i<stx[0]-1;i++) cout<<"|";
            cout<<"+";
            for(int i=0;i<stx[1];i++) cout<<"|";
            cout<<"=";
            for(int i=0;i<=stx[2];i++) cout<<"|";
            cout<<endl;
        }
        else if(stx[1]>1)
        {
            for(int i=0;i<stx[0];i++) cout<<"|";
            cout<<"+";
            for(int i=0;i<stx[1]-1;i++) cout<<"|";
            cout<<"=";
            for(int i=0;i<=stx[2];i++) cout<<"|";
            cout<<endl;
        }
        else cout<<"Impossible"<<endl;
    }
    else cout<<"Impossible"<<endl;
    return 0;
}