#include <iostream>
#include <vector>

using namespace std;

int main(){
    long long n, k, div = 0,ans = 0;
    cin>>n>>k;

    div = (n + 1) / 2;
    if(k <= div){
        ans = (k * 2) - 1;
    }
    else{
        ans = (k - div) * 2;
    }
    cout<<ans<<endl;

    return 0;
}