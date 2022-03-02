#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n],cnt=0;
        if(n==1)
        {
            for(int i=0; i<n; i++)
            {
                cin>>arr[i];
                if(arr[i]%2 != 0)
                {
                    cout<<-1<<endl;
                }
                else
                {
                    cout<<0<<endl;
                }
            }
        }
        else
        {
            int j=0;
            for(int i=0; i<n; i++)
            {
                cin>>arr[i];
                if(arr[i]%2 != (i%2))
                {
                    if(arr[i]%2==0)
                    {
                        cnt++;
                    }
                    else
                        j++;
                }
            }
            if(cnt!=j)
            {
                cout<<-1<<endl;
            }
            else
            {
                cout<<cnt<<endl;
            }


        }



        //cout<<cnt<<endl;
    }
}
