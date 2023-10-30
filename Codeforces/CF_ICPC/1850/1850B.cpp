#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(int a, int b)
{
  return (a < b);
}

int main(){
    int t,n;
    cin>>t;
    int x,y, Max = 0, cnt=0, pos = 1;
    int arr[t];
    
    while (t>0)
    {
        cin>>n;
        vector <pair<int,int>> vec(n);
        for (int i = 0; i < n; i++)
        {
            cin>>x>>y;
            pos++;
            if(x<=10){
                vec.push_back(make_pair(y,i+1));
            }
            // else{
            //     vec.push_back(0);
            // }  
        }
        sort(vec.begin(), vec.end());
        Max = vec.back().second;
        vec.clear();
        
        arr[cnt] = Max;                           
        
        cnt++;
        t--;
    }
    for (auto i : arr)
    {
        cout<<i<<endl;
    }
    
    return 0;
}