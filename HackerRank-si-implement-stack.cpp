#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    vector<int> stack;
    for (int i = 0; i < T; i++) {
        string operation;
        cin >> operation;

        if (operation == "push") {
            int x;
            cin >> x;
            stack.push_back(x); 
        } else if (operation == "pop") {
            if (stack.empty()) {
                cout << "Empty" << endl;
            } else {
                cout << stack.back() << endl;
                stack.pop_back();
            }
        }
    }

    return 0;
}