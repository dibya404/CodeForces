#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,cnt=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
        {
            ans=ans+arr[i];
        }
        else
        {
            if(ans>0)
            {
                ans=ans+arr[i];
            }
            //ans=ans+arr[i];
            else if(ans==0)
            {
                cnt++;
//cout<<ans<<endl;
            }
        }
    }
    cout<<cnt<<endl;

}
