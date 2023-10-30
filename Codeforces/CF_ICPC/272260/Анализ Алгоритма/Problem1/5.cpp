#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n; // Here you can input any number. As an example, I chose number 12
    int sum = 0; //Variable for stroring sum of values;
    for(int i = 1; i <= n; i++){ //from 1 to n
        for(int j = 1; j <= n; j++){ //from 1 to n
            sum += i*j;
        }
    }
    cout<<sum; // should output 6084
    return 0;
}