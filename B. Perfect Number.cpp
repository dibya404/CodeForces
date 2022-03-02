#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,x=0;
    cin>>n;
    int ans=n;
    while(n>0){
        x=n%10;
        sum=sum+x;
        n=n/10;
    }

    sum=10-sum;
    cout<<ans<<sum<<endl;
}
