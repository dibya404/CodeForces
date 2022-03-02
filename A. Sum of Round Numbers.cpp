#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,x;
    cin>>k;
    while(k--)
    {
        cin>>x;
        int sum=0,cnt=1,temp=0,arr[10000],j=0;
        while(x!=0)
        {
            sum=x%10;
            if(sum!=0)
            {
                x=x-sum;
                temp++;
                arr[j]=sum*cnt;
                j++;
            }
            else
            {
                x=x/10;
                cnt=cnt*10;
            }

        }
        cout<<temp<<endl;
        for(int i=0; i<j; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    //cout<<x<<endl;
}

