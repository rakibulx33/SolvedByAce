#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int x;
    cin >> x;
    while (x--) {
        int y;
        cin >> y;
        auto it = lower_bound(a.begin(), a.end(), y);
        if (*it == y) {
            cout << "Yes " << distance(a.begin(), it) + 1 << endl;
        } else {
            cout << "No " << distance(a.begin(), it) + 1 << endl;
        }
    }
    return 0;
}