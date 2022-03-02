#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0,tg=0;
        cin>>n;
        int arr[n],temp,i;
        for( i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        for( i=1; i<=n; i++)
        {
            if(i%2==0)
            {
                 /*if(arr[1]=1 && arr[n]==n)
                    {
                        cnt=i;
                        break;
                    }*/
                for(int j=2; j<=n; j=j+2)
                {
                    if(arr[j]>arr[j+1])
                    {
                        temp=arr[j+1];
                        arr[j+1]=arr[j];
                        arr[j]=temp;
                        tg=1;

                    }

                }
                if(tg>=1)
                    {
                        tg=0;
                        continue;
                    }
                else
                {
                    cnt=i;
                    break;
                }

            }
            else
            {
                for(int j=1; j<=n; j=j+2)
                {
                    if(arr[j]>arr[j+1])
                    {
                        temp=arr[j+1];
                        arr[j+1]=arr[j];
                        arr[j]=temp;
                        tg=1;

                    }

                }
                if(tg>=1)
                    {
                        tg=0;
                        continue;
                    }
                else
                {
                    cnt=i;
                    break;
                }
            }

        }
        cout<<cnt<<endl;
    }
}

