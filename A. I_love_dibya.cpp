#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,best=0,min0=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    if(n==1)
    {
        cout<<0<<endl;
    }
    else
    {
        best=arr[0];
        min0=arr[0];
        for(int i=1; i<n; i++)
        {
            if(arr[i]>best)
            {
                cnt++;
                best=arr[i];
            }
            else
            {
                if(arr[i]<min0)
                {
                    cnt++;
                    min0=arr[i];
                }
            }
        }
        cout<<cnt<<endl;
    }
}
