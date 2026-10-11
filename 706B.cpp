#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int day; cin >> day;
    vector<int> b(day);
    for(int i = 0; i < day; i++) {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    for(int i = 0; i < day; i++) {
        auto it = upper_bound(a.begin(), a.end(), b[i]);
        if(it != a.end())
        {
            cout << it - a.begin();
        }
        else if(b[i] >= a[a.size() - 1]) cout << a.size();
        else cout << 0;
        cout << '\n';
    }
}
