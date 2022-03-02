
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i =1;i<=n;i++)
    {
        cin>>x;
        if(x%2==0)
        {
            arr[i]=x-1;
        }
        else
        {
            arr[i]=x;
        }
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
