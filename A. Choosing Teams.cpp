#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]+k<=5)
        {
            cnt++;
        }
        else
            break;
    }
    if(cnt<3)
        cout<<0<<endl;
    else
    {
        cnt=cnt/3;
        cout<<cnt<<endl;
    }
}
