#include <iostream>
#include <string>

using namespace std;

int search(int arr[], int N, int k){
    int i;
    for (int i = 0; i < N; i++)
    {
        if(arr[i]==k){
            return 1;
        }
    }
    return -1;
    
}

int main(){
    int n;
    int arr[100];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int result = search(arr, n, 1);
    if(result==1) cout<<"HARD";
    else cout<<"EASY";
    return 0;    
}