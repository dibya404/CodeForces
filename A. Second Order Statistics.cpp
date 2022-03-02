#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],temp[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int min0=arr[0];
    int flag =0;
    for(int i =0;i<n;i++)
    {
       if(arr[i]>arr[0])
       {
           cout<<arr[i]<<endl;
           flag = 1;
           break;
       }

    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }





}
