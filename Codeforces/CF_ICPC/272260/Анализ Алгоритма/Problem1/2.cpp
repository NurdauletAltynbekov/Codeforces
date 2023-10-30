#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n; // Here you can input any number. As an example, I chose number 12
    int sum = 0; //Variable for stroring sum of values;
    for(int i = 3; i < n+2; i++){ //from 1 to n+1
        sum += i; 
    }
    cout<<sum; // should output 88 
    return 0;
}