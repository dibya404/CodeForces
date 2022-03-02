#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y=0;
    scanf("%d", &n);
    x=6-n;
    //char arr1[n],arr2[n],arr3[n];

    string arr1[6]= {"purple","green","blue","orange","red","yellow"};
    string arr2[6]= {"Power","Time","Space","Soul", "Reality", "Mind"};
    string arr3[n],temp[100];

    if(n == 0)
    {
        cout<<x<<endl;
        for(int i=0; i<6; i++)
        {

            cout<<arr2[i]<<endl;
        }
    }
    else
    {
        for(int i = 0; i < n ;i++)
        {
            cin>>arr3[i];
             for(int j=0; j<6; j++)
            {
                if(arr3[i]==arr1[j])
                {

                    temp[j]=arr3[i];

                     break;

                }

            }

        }
        cout<<x<<endl;
       for(int i=0;i<6;i++)
        {
            if(temp[i]==arr1[i])
            {

            }
            else
            {
                cout<<arr2[i]<<endl;
            }

        }


    }

}
