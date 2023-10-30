#include <bits/stdc++.h>
using namespace std;



int main(){
    string str1,str2;
    cin>>str1;
    sort(str1.begin(), str1.end());
    int cnt2 = 0;
    for (auto &&i : str1)
    {
        if(i == '1'){
            cnt2++;
        }
    }
    cout<<cnt2<<endl;
    
    str2.push_back(str1[0]);
   for (int i=1;i<str1.length();i++)
   {
        if(str2.back() == str1[i]){
            str2.pop_back();
        }
        else{
            str2.push_back(str1[i]);
        }
        cout<<str2.back()<<endl<<"------------------"<<endl;
   }
   cout<<str2.length()<<endl;
   cout<<((str2.length()==0 ) ? "YES" : "NO");
    return 0;
}