#include <iostream>
#include <cmath> //for using pow() function
using namespace std;

int main(){
    int n;
    cin>>n; // Here you can input any number. As an example, I chose number 12
    int sum = 0; //Variable for stroring sum of values;
    for(int j = 3; j <= n; j++){ //from 1 to n+1
        sum += pow(3,j+1); 
    }
    cout<<sum; // should output 2391444
    return 0;
}