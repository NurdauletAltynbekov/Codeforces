#include <iostream>
#include <vector>
#include <algorithm> //sort
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    vector <int> vec;
    
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    vec.push_back(d);

    sort(vec.begin(), vec.end());

    int cnt = 0;

    for (int i = 1; i <= vec.size(); i++)
    {
        if(vec[i-1] != vec[i]){
            cnt++;
        }
    }
    cout<<4-cnt<<endl;
    
    
    return 0;
}