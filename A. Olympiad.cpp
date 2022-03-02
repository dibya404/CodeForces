#include<iostream>

using namespace std;

int main()
{
	int i,j,k,n;
	cin>>n;
	int a[n],temp[n];

	for(i=0;i<n;++i)
		cin>>a[i];

	for(i=0;i<n;++i)
		for(j=i+1;j<n;)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;++k)
					a[k]=a[k+1];

				--n;
			}
			else
				++j;
		}

    int m=0;
	for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
           m++;
        }
    }
    cout<<m<<endl;

	return 0;
}
