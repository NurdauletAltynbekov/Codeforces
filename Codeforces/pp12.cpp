#include <iostream>
#include <string>
using namespace std;

int main(){
    int n,m;
    cin >> n;
    int arr1[n];
    
    int arr3[110];


    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i]; 
        arr3[i]=arr1[i];
    }

    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
        arr3[i+n] = arr2[i];
    }

    int c = n+m;

    for (int i = 0; i < c; i++){
        cout<<arr3[i]<<' ';
    }

    cout<<endl;
    bool swapped;
    
    for (int i = 0; i < c - 1; i++) {
        swapped = false;
        for (int j = 0; j < c - i - 1; j++) {
            if (arr3[j] > arr3[j + 1]) {
                swap(arr3[j], arr3[j + 1]);
                swapped = true;
            }
        }
 
        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
    for (int i = 0; i < c; i++){
        cout<<arr3[i]<<' ';
    }
    
    return 0;
}