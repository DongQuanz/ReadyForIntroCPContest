#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int i = 0; i < n; ++i)cin>> a[i];
    int sum = 0;
    for(int i = 0; i < k; ++i)sum+=a[i];
    int res = sum;
    int index = 1;
    for(int i = k; i < n; ++i){
        sum += a[i];
        sum -= a[i-k];
        if(sum < res){
            res = sum;
            index = i - k + 2;
        }
        
    }
    cout << index ;
}