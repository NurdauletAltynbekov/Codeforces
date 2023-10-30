#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        vector <int> vec;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin>>num;
            vec.push_back(num);
        }
        // sort(vec.begin(),vec.end(), greater<int>());
        sort(vec.begin(),vec.end());        
        int m = 0, b  = 0;
        for (auto &&i : vec)
        {
            if(i%2==0){
                m+=i;
            }
            else if(i%2!=0){
                b+=i;
            }
        }
        cout<<((m>b) ? "YES" : "NO")<<endl;
        m = 0, b = 0;
        t--;
    }
    return 0;
}