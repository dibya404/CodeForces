#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(a%2==0)
        {
            for(int i=1; i<=a; i++)
                if(i%2!=0)
                {
                    cout<<i+1<<" ";
                }
                else
                    cout<<i-1<<" ";

            cout<<endl;
        }
        else
        {
            if(a==3)
            {
                for(int i=1; i<=a; i++)
                {
                    if(i==1)
                    {
                        cout<<i+2<<" ";
                    }
                    else
                        cout<<i-1<<" ";
                }
                cout<<endl;
            }
            else
            {
                for(int i=1; i<=3; i++)
                {
                    if(i==1)
                    {
                        cout<<i+2<<" ";
                    }
                    else
                        cout<<i-1<<" ";
                }
                for(int i=4; i<=a; i++)
                {
                    if(i%2!=0)
                    {
                        cout<<i-1<<" ";
                    }
                    else
                        cout<<i+1<<" ";
                }
                cout<<endl;


            }
        }
    }
}
