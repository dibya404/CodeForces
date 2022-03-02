#include<bits/stdc++.h>
using namespace std;;
int main()
{
    int x,sum=0;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+x);
    sum=ceil(x/2);
    cout<<arr[sum]<<endl;

}
