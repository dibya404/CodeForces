#include <iostream>
using namespace std;

int main(){
    int input[100], count0, i, min0,c,n;
    cin>>n;
    while(n--)
    {
        c=0;
         cin >> count0;

    for(i = 0; i < count0; i++){
        cin >> input[i];
    }
    min0 = input[0];
    for(i = 0; i < count0; i++){
        if(input[i] < min0){
            min0 = input[i];
        }
    }
     for(i = 0; i < count0; i++){
        if(input[i] == min0){
            c++;
        }
    }
    cout<<(count0-c)<<endl;
    }



    return 0;
}
