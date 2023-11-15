#include <bits/stdc++.h>
using namespace std;


int cntAB(int arr1[], int arr2[], int n){
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + n);

    int i = 0, j = 0, cnt = 0;
    while(i < n && j < n){ //n
        if(arr1[i] == arr2[j]){
            cnt++;
            i++,j++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else{
            i++;
        }
    }
    return cnt;
}
// 5 4 2 3 4 4  -> 2 3 4 4 4 5 > i
// 1 2 5 7 1 1  -> 1 1 1 2 5 7 > j

int main(){
    int n;
    cin>>n;
    int arr1[n],arr2[n];
    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }
    for(int j = 0; j < n; j++){
        cin>>arr2[j];
    }
    cout<<cntAB(arr1,arr2,n);    
    return 0;
}

