
#include<bits/stdc++.h>
using namespace std;

vector<string>vec;

int main()
{
    string s1, s2;
    int n, c=0, m;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s1;
        vec.push_back(s1);
    }
    cin>>s2;
    for(int i=1;i<=n;i++)
    {
        m = s2.find(vec[i]);
        if(m==-1)
        {
            cout<<"No"<<endl;
            return 0;
        }
        else
        {
            c++;
        }
    }
    if(c==n)
        cout<<"Yes"<<endl;

}
