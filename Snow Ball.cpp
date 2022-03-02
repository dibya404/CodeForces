
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w1,w2,w3,h1,h2,h3,sum=0;
    cin>>w1>>h1;

    cin>>w2>>h2;

    cin>>w3>>h3;
    if(h1==h2)
    {
        sum=(sum+w1+h1+h3)-(w2+w3);
    }
    else if(h2==h3)
    {
        sum=(sum+w1+h1+h2)-(w2+w3);
    }
    else if(h1==h2 && h2==h3)
    {
        sum=(sum+w1+h1)-(w2+w3);
    }
    else
    {
        sum=(sum+w1+h1+h2+h3)-(w2+w3);
    }


    if(sum>0)
    {
        cout<<sum<<endl;
    }
    else
    {
        sum=0;
        cout<<sum<<endl;
    }

}
