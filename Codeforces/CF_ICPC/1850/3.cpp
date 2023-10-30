#include <bits/stdc++.h>
using namespace std;



int main(){
    string str1,str2;
    cin>>str1;
    sort(str1.begin(), str1.end());
    int index=0;
    str2.push_back(str1[0]);
   for (int i=1;i<str1.length();i++)
   {
        if(str2.back() == str1[i]){
            str2.pop_back();
            // cout<<str2.back()<<" "<<str1[i]<<endl;
            // cout<<str2.length();
        }
        else{
            str2.push_back(str1[i]);
            // cout<<str2.back()<<" "<<str1[i]<<endl;
            // cout<<str2.length();
        }
        cout<<str2.back()<<" "<<str1[i]<<endl;
        cout<<str2.length()<<endl;
   }

   cout<<((str2.length()==0) ? "YES" : "NO")<<endl<<str2.length();
    return 0;
}