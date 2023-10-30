#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str2;
    string str[n];
    string answer[n];
    char ch[3];
    for (int i = 0; i < n; i++)
    {
        cin>>str[i];
        str2 = str[i];
        // char c = ' ';
        string s_c1 = "";
        for (int j = 0; j < str[i].length(); j++)
        {
            if(str2 == "abc"){
                answer[i]="YES";
                break;
            }
            s_c1 = str2;
            swap(s_c1[0],s_c1[1]);
            if(s_c1[0] == 'a' && s_c1[1] == 'b' && s_c1[2] == 'c'){
                answer[i] = "YES";
                break;
            }
            s_c1 = str2;
            swap(s_c1[1],s_c1[2]);
            if(s_c1[0] == 'a' && s_c1[1] == 'b' && s_c1[2] == 'c'){
                answer[i] = "YES";
                break;
            }
            s_c1 = str2;
            swap(s_c1[0],s_c1[2]);
            if(s_c1[0] == 'a' && s_c1[1] == 'b' && s_c1[2] == 'c'){
                answer[i] = "YES";
                break;
            }
            s_c1 = str2;
            answer[i] = "NO";
            break;

        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<answer[i]<<endl;
    }
    
    
    return 0;
}