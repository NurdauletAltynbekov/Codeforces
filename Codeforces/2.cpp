#include <iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int a,b,c,d;
    a = n%2;
    b = (n/2)%2;
    c = (n/2/2)%2;
    d = (n/2/2/2)%2;
    

    cout<<a * 8 + b*4 + c*2 + d*1<<endl;
    
    return 0;
}