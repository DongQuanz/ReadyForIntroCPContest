#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s; 
    cin >> s;
    
    vector<int> pr (s.size(), 0);
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == s[i - 1]) pr[i] = pr[i -1] + 1;
        else pr[i] = pr[i - 1];
    }

    int q; cin >> q;
    for(int i = 0; i < q; i++) {
        int l, r; cin >> l >> r;
        --l, --r;
        cout << pr[r] - pr[l] << '\n';
    }
}