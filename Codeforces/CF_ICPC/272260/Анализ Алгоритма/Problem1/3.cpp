#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n; // Here you can input any number. As an example, I chose number 12
    int sum = 0; //Variable for stroring sum of values;
    for(int i = 0; i < n; i++){ //from 1 to n+1
        sum += i*(i+1); 
    }
    cout<<sum; // should output 572
    return 0;
}