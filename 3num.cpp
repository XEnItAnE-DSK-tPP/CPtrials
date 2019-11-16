#include<bits/stdc++.h>
using namespace std;
void swap(int* a, int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int a[4];
    for(int i=0;i<4;i++) cin>>a[i];
    int max=0;
    for(int i=1;i<4;i++) if(a[max]<a[i]) max=i;
    swap(&(a[max]),&(a[3]));
    cout<<a[3]-a[0]<<" "<<a[3]-a[1]<<" "<<a[3]-a[2]<<endl;
    return 0;
}