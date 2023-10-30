#include <bits/stdc++.h>
using namespace std;

int main(){
    string str = "";
    //vector <vector <char>> vect;
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
        // for (int i = 0; i < 8; i++)
        // {
        //     for (int j = 0; j < 8; j++)
        //     {
        //         cout<<str;
        //     } 
        //     cout<<endl;
        // }
        cout<<str;
    
    
    return 0;
}