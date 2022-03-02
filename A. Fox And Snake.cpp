
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,flag=0;
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            for(int j=0; j<k; j++)
            {
                cout<<"#";
            }
            cout<<endl;
        }
        else
        {
            if(flag==0)
            {
                //cout<<"#";
                for(int j=0; j<k-1; j++)
                {
                    cout<<".";
                }
                cout<<"#";
                flag=1;
                cout<<endl;
            }
            else
            {
                cout<<"#";
                for(int j=0; j<k-1; j++)
                {
                    cout<<".";
                }
                flag=0;
                cout<<endl;
            }

            //cout<<endl;
        }


    }
}
