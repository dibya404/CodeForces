#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, flag;
    cin>>t;
    while(t--)
    {
        cin>>n;
        flag = 0;
        int arr[n+1];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(ceil((double)sqrt(arr[i])) != floor((double)sqrt(arr[i])))
                flag = 1;
        }

        if (flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}



