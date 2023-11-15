#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map <int, int> arr1,arr2;
    for (auto i = 0; i < n; i++)
    {
        int num;
        cin>>num;
        arr1.insert(make_pair(i,num));
    }
    for (auto i = 0; i < n; i++)
    {
        int num;
        cin>>num;
        arr1.insert(make_pair(i,num));
    }
    

    

    return 0;
}