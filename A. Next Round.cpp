#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0,z=0;
    cin>>n>>k;
    int arr[101];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            z++;
        }

    }
    for(int i=1; i<= n; i++)
    {

        if(arr[i]>=arr[k] && arr[i]!=0)
        {
            cnt++;
        }
    }
    if(z==n)
    {
        cout<<0<<endl;
    }
    else
        cout<<cnt<<endl;

}
