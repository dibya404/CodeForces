#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,cnt=0;
        cin>>n;
        string str,ans;
        cin>>str;
        ans=str;
        sort(str.begin(),str.end());
        for(int i=0; i<n; i++)
        {
            if(str[i]==ans[i])
                cnt++;
        }
        cout<<n-cnt<<endl;

    }


}
