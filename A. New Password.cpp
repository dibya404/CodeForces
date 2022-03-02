#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cnt=0;
    cin>>n>>k;
    char arr[101];
    arr[0]='a';
    for(int i=0;i<k;i++)
    {
        arr[i]=arr[0]+i;
    }
    for(int i =0;i<n;i++)
    {

             for(int j=0;j<k;j++)
        {
            cout<<arr[j];
            cnt++;
            if(cnt==n)
            {
                break;
            }

        }
         if(cnt==n)
            {
                break;
            }


    }
}
