#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        string arr,en;

        cin>>en;
        cin>>arr;

        int j=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]=='1')
            {

                if(en[i]=='0')
                    cnt++;
                else if(en[i-1]=='1')
                {
                    cnt++;
                    en[i-1]='0';
                }
                else if(en[i+1]=='1')
                {
                    cnt++;
                    en[i+1]='0';
                }
            }
        }
        cout<<cnt<<endl;

    }



}
