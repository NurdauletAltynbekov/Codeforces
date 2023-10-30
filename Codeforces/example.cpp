#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>> n;
    int n1 = n%2;
    int n2 = (n/2)%2;
    int n3 = (n/2/2)%2;
    int n4 = (n/2/2/2)%2;
    cout<<n1*pow(2,3)+n2*pow(2,2)+n3*pow(2,1)+n4*pow(2,0);
    return 0;
}