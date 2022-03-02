#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,x=0,temp[1000];
    cin>>t;
    while(t--)
    {
        int sum=0;
        cin>>n>>m;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        if(sum>=m)
        {
            arr[0]=m;
            cout<<arr[0]<<endl;
        }
        else if(sum<m && sum != 0)
        {
            cout<<sum<<endl;
        }

        else
            cout<<0<<endl;


    }

}
