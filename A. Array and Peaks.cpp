#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;

        if(k==0)
        {
            for(int i=1; i<=n; i++)
            {
                cout<< i <<" ";
            }
            cout<<endl;
        }
        else if(n<3)
        {
            cout<< -1 <<endl;
        }
        else if(k > ((n-1)/2) )
        {
            cout<< -1 <<endl;
        }
        else if(n>=3)
        {
            int peak[k];
            for(int i=1; i<=k; i++)
            {
                peak[i] = n;
                n--;
            }

            for(int i=1; i<=n; i++)
            {
                cout<< i <<" ";
                if(k>0)
                {
                    cout<< peak[i] <<" ";
                    k--;
                }
            }
            cout<<endl;
        }
    }

    return 0;
}
