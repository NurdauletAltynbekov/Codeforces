#include <iostream>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    // cout << ((x > y) ? x : y);
    cout<<(x<=y? 2 : (2*x+y-1)/y )<<endl;
    
    return 0;
}

