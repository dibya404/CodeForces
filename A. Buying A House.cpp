#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,ans=999999999,sum=0;
    cin>>n>>m>>k;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i]<=k && arr[i]!=0)
        {

            sum=abs(i-m);
            if(sum<ans)
            {
                ans=sum;
            }
        }
    }
    cout<<ans*10<<endl;
}
