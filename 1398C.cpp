#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long res = 0;
    vector <int> a(n+1,0);
    for(int i = 1; i <= n; ++i){
        a[i] = a[i-1] + (s[i-1]-'0') - 1;    
    }
    map<int,int>m;
    ++m[0];
    for(int i = 1; i <= n; ++i){
        res += m[a[i]];
        ++m[a[i]];
    }
    //for(int i = 1; i <= n; ++i)cout << a[i] <<' ';cout <<'\n';
    cout << res <<'\n';
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}