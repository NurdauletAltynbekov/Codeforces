#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    int n;
    int p,q;
    cin>>n>>p;
    vector<int> vec;
    int arrP[100];
    for (int i = 0; i < p; i++)
    {
        cin>>arrP[i];
        vec.push_back(arrP[i]);
    }
    cin>>q;
    int arrQ[100];
    for (int j = 0; j < q; j++)
    {
        cin>>arrQ[j];
        vec.push_back(arrQ[j]);
    }
    
    sort(vec.begin(),vec.end());
    // for(auto i: vec)
    //     cout << i << " ";
    // cout<<endl;
    auto it = unique(vec.begin(), vec.end());

    vec.resize(distance(vec.begin(), it));

    // for (it = vec.begin(); it!=vec.end(); ++it)
    //     cout << *it<<' ';
    cout<<((vec.size() == n) ? "I become the guy." : "Oh, my keyboard!");
    return 0;
}