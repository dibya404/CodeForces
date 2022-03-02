#include<bits/stdc++.h>
using namespace std;
int main()
{
    string arr,arr1;
    cin>>arr;
    cin>>arr1;
    int cnt=0,x=arr.size();
    int j=arr.size()-1;
    for(int i=0;i<arr.size();i++)
    {
       if(arr[i]!=arr1[j])
       {
           break;
       }
       else
       {
            cnt++;
            j--;
       }


    }
    if(cnt==x)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
