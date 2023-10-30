#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n,m,b;
    cin>>n>>m>>b;
    double z = n + m;
    if(z*0.1<b){
        cout<<"Boris, you are punished!";
    }
    else{
        cout<<"You are my sweet baby";
    }
    return 0;
}