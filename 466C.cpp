#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    long long sum = 0;
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
        sum+=a[i];
    }
    if(sum % 3 != 0){
        cout << 0;
        return 0;
    }
    sum /= 3;
    vector<int>pre(n+1,0);
    long long s = 0;
    for(int i=1; i <= n; ++i){
        s += a[i-1];
        pre[i] = pre[i-1];
        if(s == sum)++pre[i];
    }
    long long res = 0;
    s = 0;
    for(int i = n-1; i > 0; --i){
        s+=a[i];
        if(s==sum)res += pre[i-1];
        //cout << pre[i] <<' '<<suf;
        //cout <<'\n';
    }
    cout << res;
}