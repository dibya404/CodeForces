#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(abs(arr[j]-arr[i])==1)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag ==1)
        {
            cout<<2<<endl;
        }
        else
            cout<<1<<endl;
    }
}
