#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,cnt;
    cin>>n;
    long long arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            if(arr[i]==4)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cnt=sqrt(arr[i]);
            if(arr[i]==1)
            {
                cout<<"NO"<<endl;
            }
            else if(cnt*cnt==arr[i])
            {
                int x=2,flag=1;
                while(x<=cnt/2)
                {
                    if(cnt%x==0)
                    {
                        flag=0;
                        break;
                    }
                    x++;
                }
                if(flag==0)
                {
                    cout<<"NO"<<endl;
                }
                else
                {
                    cout<<"YES"<<endl;
                }


            }
            else
                cout<<"NO"<<endl;
        }
    }
}

