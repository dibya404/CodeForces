#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4],ans1,ans2,ans3;
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+4);
    ans2=arr[3]-arr[2];
    cout<<arr[0]-ans2<<" ";
    cout<<ans2<<" ";
    cout<<arr[1]-ans2<<endl;
}
