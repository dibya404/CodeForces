#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1,s2;
    cin>>s>>s1>>s2;
    int n=s.size();
    int m=s1.size();
    int j=0,x=0,cnt=0;
    x=n+m;
    char arr[x],arr1[x];
    //cout<<n;
    for(int i=0; i<n; i++)
    {
        arr[i]=s[i];
    }
    for(int i=n; i<x; i++)
    {
        arr[i]=s1[j];
        j++;
        //cout<<s1[j]<<endl;
    }
    sort(arr,arr+x);
    if(s2.size()!=x)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        for(int i=0; i<x; i++)
        {
            arr1[i]=s2[i];
        }
        sort(arr1,arr1+x);
        for(int i=0; i<x; i++)
        {
            if(arr[i]==arr1[i])
            {
                cnt++;
            }
            else
            {
                cout<<"NO"<<endl;
                break;
            }
        }
        if(cnt==x)
        {
            cout<<"YES"<<endl;
        }
    }

}
