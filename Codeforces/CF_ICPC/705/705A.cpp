#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s1;
    bool isTrue = false;
    while (n)
    {
        if(!isTrue){
            s1 += "I hate ";
            isTrue = true;
        }
        else{
            s1 += "I love ";
            isTrue = false;
        }
        if(n<=1){
            s1 += "it";
        }
        else{
            s1+= "that ";
        }
        n--;
    }
    cout<<s1<<"\n";
    
    
    return 0;
}