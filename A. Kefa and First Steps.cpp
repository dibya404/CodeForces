#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=1,max1=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        {
            cnt++;
            max1=max(max1,cnt);

        }
        else
        {
            cnt=1;
        }
    }
    cout<<max1<<endl;
}
