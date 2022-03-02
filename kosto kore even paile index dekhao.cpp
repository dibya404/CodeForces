
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,temp[1000],arr1[2000],j=0,k=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];

            if(arr[i]%2==0)
            {

                temp[j]=i;
                j++;
            }
            else
            {
                arr1[k]=i;
                k++;
            }
        }
        if(n==1 && arr[1]%2!=0)
        {
            cout<<"-1";
            k=0,j=0;
        }
        else if(j>0)
        {
            cout<<j<<endl;
            for(int i = 0; i<j; i++)
            {
                cout<<temp[i]<<" ";
            }
            j=0,k=0;
        }
        else
        {
            cout<<k<<endl;
            for(int i = 0; i<k; i++)
            {
                cout<<arr1[i]<<" ";
            }
            k=0;

        }
        cout<<endl;


    }
}
