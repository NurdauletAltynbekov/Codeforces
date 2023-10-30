#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for (int i = 0; i < vec.size(); i++)
    {
        cin>>vec[i];
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }        
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> a(n);
//     for(int i = 0; i < n; ++i){
//         cin >> a[i];
//     }
//     sort(a.begin(), a.end());
//     for(auto i: a)
//         cout << i << " ";
//     cout<<a.size();
//     return 0;
// }