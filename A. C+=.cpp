#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n,ans=0,cnt=0;
    cin>>a>>b>>n;

    while(ans<=n)
    {
       if(a > b){
                b += a;
                ans = b;
                cnt++;
            }
            else{
                a += b;
                ans = a;
                cnt++;
            }
            if(ans> n){
                break;
            }
    }
    cout<<cnt<<endl;
    }
}
