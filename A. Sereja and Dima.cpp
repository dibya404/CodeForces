#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s=0,d=0,i=0,j,flag=0;
    cin>>t;
    int arr[t];
    for(int i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    j=t-1;
  while(j>=i)
  {
            if(arr[i]>arr[j])
            {
               if(flag==0)
               {
                   s=s+arr[i];
                   flag=1;
               }
               else
               {
                   d=d+arr[i];
                   flag=0;
               }
               i++;
            }
            else
            {
                if(flag==0)
               {
                   s=s+arr[j];
                   flag=1;
               }
               else
               {
                   d=d+arr[j];
                   flag=0;
               }
               j--;
            }


    }
    cout<<s<<" "<<d<<endl;
}
