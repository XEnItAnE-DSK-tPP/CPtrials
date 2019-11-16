#include <bits/stdc++.h>
using namespace std;
int thanosSort(int arr[],int size);
int max(int a, int b);
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<thanosSort(arr,n)<<endl;
}
int thanosSort(int arr[], int size)
{
    bool sorted=true;
    for(int i=1;i<size;i++)
    {
        if(arr[i]<arr[i-1])
        {
            sorted=false;
            break;
        }
    }
    if(sorted) return size;
    else return max(thanosSort(arr,size/2),thanosSort(arr+size/2,size/2));
}
int max(int a, int b)
{
    return a>b?a:b;
}