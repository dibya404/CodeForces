

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(n==1 && arr[0]%2!=0)
        {
            cout<<-1<<endl;
        }
        else if(arr[0]%2==0)
        {
            cout<<1<<endl;
            cout<<1<<endl;
        }
        else if(arr[1]%2 == 0)
        {
            cout<<1<<endl;
            cout<<2<<endl;
        }
        else
        {
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;

        }
        }
}
