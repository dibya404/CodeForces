
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n],temp[n];
    arr[0]='b';
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];

    }
    for(int i=1;i<=n;i++)
    {
         if(arr[i]=='a'|| arr[i]=='e'|| arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='y')
        {
            if((arr[i-1]!='a'&& arr[i-1]!='e'&& arr[i-1]!='i'&& arr[i-1] !='o'&& arr[i-1]!='u' && arr[i-1]!='y'))
            {
                temp[i]=arr[i];

            }
            else
                continue;

        }

        else
        {
            temp[i]=arr[i];
        }
         cout<<temp[i];
    }
    cout<<endl;

}
