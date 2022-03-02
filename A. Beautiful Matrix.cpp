#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6][6],i,j,x,y,ans=0;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
     for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(arr[i][j]==1){
                x=i;
                y=j;

                break;
            }
        }
    }
    ans=abs(x-3)+abs(y-3);
   cout<<ans<<endl;
    return 0;
}
