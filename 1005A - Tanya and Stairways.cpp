#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,go=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]==1)
        {
            go++;
        }
    }
     cout<<go<<endl;

    for(int i=1; i<n; i++)
    {
        if(go==1)
        {
            break;
        }
        else if (arr[i]==1 && go !=1 && n!=go)
        {
            cout<<arr[i-1]<<" ";

        }
        else if (n==go)
        {
            cout<<arr[i]<<" ";
        }

    }
    cout<<arr[n-1]<<endl;


}
