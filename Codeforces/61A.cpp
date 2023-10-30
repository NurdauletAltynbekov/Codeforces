#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1,s2,s3;
    cin>>s1>>s2;

    int l1 = s1.size();
    int l2 = s2.size();

    for (int i = 0; i < l1; i++)
    {
        s3.push_back(((s1[i] != s2[i]) ? '1' : '0'));
    }

    cout<<s3<<endl;
    return 0;
}