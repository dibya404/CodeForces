
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
             c++;
            if(c%3==0 || c%10==3)
            {
                c++;
                if(c%3==0 || c%10==3)
                    c++;
            }

            if(c%3==0 || c%10==3)
                    c++;

        }
        cout<<c<<endl;
    }



}
