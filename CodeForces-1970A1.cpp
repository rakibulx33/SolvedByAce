#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.length();
    vector<pair<int, int>> v(n);
    int prefix = 0;

    for (int i = 0; i < n; i++) {
        v[i] = {prefix, n - i - 1};
        if (s[i] == '(') {
            prefix++;
        } else {
            prefix--;
        }
    }

    sort(v.begin(), v.end());
    
    for (int i = 0; i < n; i++) {
        cout << s[n - v[i].second - 1];
    }
    cout << endl;

    return 0;
}