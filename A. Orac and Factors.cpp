
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,small=0;
        cin>>n>>k;
        for(int i=0; i<k; i++)
        {
            for(int j=2; j<=k+10; j++)
            {

                if(n%j==0)
                {
                    small=j;
                    n=n+small;
                    break;
                }
            }
        }
        cout<<n<<endl;
    }
}
