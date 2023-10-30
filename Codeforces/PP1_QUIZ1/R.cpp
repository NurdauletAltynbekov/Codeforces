#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num = 0;
    int product = 1;
    int sum = 0;
    while(n){
        num = n%10;
        sum+= num;
        product *= num;
        n/=10;
    }
    cout<<product + sum;
    return 0;
}