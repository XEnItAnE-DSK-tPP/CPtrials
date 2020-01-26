#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

void BFS(char** graph,int n,vector<int> *v)
{
    
}

int main()
{
    int t=0;
    cin>>t;

    while(t--)
    {
        int n=0;
        cin>>n;
        char graph[n][n];
        for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin>>graph[i][j];
        vector<int> cases;
        BFS((char**)graph,n,&cases);
        lli total_cases=1;
        for(int i=0;i<cases.size();i++)total_cases*=cases[i];
        cout<<total_cases<<endl;
    }

    return 0;
}