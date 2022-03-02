#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c,flag=0;
        cin>>n>>c;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]>c)
            {
                if((arr[0]+arr[1])<=c)
                {


                }
                else
                {

                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }
}
