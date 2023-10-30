#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


double hyp(double a, double b){
    double c;
    c = sqrt(a*a+b*b);
    return c;
}

int main(){
    double a,b;
    cin>>a>>b;
    double c;
    c = hyp(a,b);
    cout<<setprecision(4)<<c;
    return 0;
}
