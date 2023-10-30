#include <iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum +i;
    }
    

    // while(n>0){
    //     sum+=n;
    //     n--;

    // }

    cout<<sum<<endl;
    
    return 0;
}