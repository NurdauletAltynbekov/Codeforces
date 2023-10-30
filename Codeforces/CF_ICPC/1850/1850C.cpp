#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, cnt = 0;
    cin>>t;
    string str = "";
    vector <string> v(t);
    while (t>0)
    {
        vector <vector <char>> vect(8, vector <char> (8));
        for (int i = 0; i < vect.size(); i++)
        {
            for (int j = 0; j < vect[i].size(); j++)
            {
                cin>>vect[i][j];
            } 
        }
        for (int i = 0; i < vect.size(); i++)
        {
            for (int j = 0; j < vect[i].size(); j++)
            {
                if(vect[i][j] != '.'){
                    str.push_back(vect[i][j]);
                }
            } 
        }

        v.push_back(str);
        str.clear();
        for (int i = 0; i < vect.size(); i++)
        {
            vect[i].clear();
            
        }
        cnt++;
        t--;
    }
    // for (int i = 0; i < t; i++)
    // {
    //     cout<<arr[i]<<endl;
    // }
    for (auto i : v)
    {
        cout<<i<<endl;
    }
    
    
    
    return 0;
}