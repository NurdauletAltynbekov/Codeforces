#include <bits/stdc++.h>
using namespace std;
int main(){
    int mid, end, fin;
    cin>>mid>>end>>fin;
    cout<<((mid+end+fin>=70 && mid+end>=30 && fin>=20) ? "YES!" : "NO.");
    return 0;
}