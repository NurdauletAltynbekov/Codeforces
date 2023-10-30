#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    int x, y;
    vector <pair<int, int>> vec;
    bool b = true;
    while(n>0){
        cin>>x>>y;
        vec.push_back(make_pair(x,y));
        n--;
    }
    sort(vec.begin(), vec.end());
    for (auto i : vec)
    {
        if(s>i.first){
            s+=i.second;
        }
        else{
            b = false;
        }
    }
    
   cout<<((b) ? "YES" : "NO");

}