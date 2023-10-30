#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[110];
    double sum = 0.0, d = 0.0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum += arr[i];
    }
    d = sum/n;
    cout<<fixed<<setprecision(12)<<d<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    
    
    return 0;
}