#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int num = sqrt(N);
    cout<<((pow(num,2) == N) ? "Perfecto" : "Simple");
    return 0;
}