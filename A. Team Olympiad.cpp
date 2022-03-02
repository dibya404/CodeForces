#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int n,j=1,k=1,l=1,o=0,th=0,tw=0;
     cin>>n;
     int arr[n],on[n],two[n],the[n];
     for(int i=1;i<=n;i++)
     {
         cin>>arr[i];
         if(arr[i]==1)
         {
              o++;
              on[j]=i;
              j++;
         }

         else if(arr[i]==2)
         {
             tw++;
             two[k]=i;
             k++;
         }

         else
         {
             th++;
             the[l]=i;
             l++;
         }

     }
     int max0=0;
     max0=min(o,tw);
     max0=min(max0,th);
     cout<<max0<<endl;
     for(int i=1;i<=max0;i++)
     {
         cout<<on[i]<<" "<<two[i]<<" "<<the[i]<<endl;
     }
 }
