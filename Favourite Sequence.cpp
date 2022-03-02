#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,arr[300],test[300],n,y,j,x;

    cin>>n;
    while(n--)
    {
        cin>>t;
        for(int i = 1;i<=t;i++)
        {
            cin>>arr[i];
        }

        int flag = 0;
        x=1;
        y=t;
        for(int i=1;i<=t;i++)
        {
            if (flag==0)
            {
                test[i]=arr[x];
                x++;
                flag=1;
            }
            else
            {
                test[i]=arr[y];
                y--;
                flag=0;
            }

        }
        /*y=t;
       for(int i=2;i<=(t-x);i+=2)
        {

           test[i]=arr[y];
            y--;
        }*/
        for(int i=1;i<=t;i++)
        {
            cout<<test[i]<<" ";
        }
        cout<<endl;

    }
}
