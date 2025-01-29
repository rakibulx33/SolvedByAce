#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    vector<int> s;
    while (q--) {
        int type;
        cin >> type;
        if (type == 0) {
            int x;
            cin >> x;
            s.push_back(x);
        } else if (type == 2) {
            if (!s.empty()) {
                s.pop_back();
            }
        } else {
            int p;
            cin >> p;
            cout << s[p] << endl;
        }
    }

    return 0;
}