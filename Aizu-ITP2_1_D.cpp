#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q;
    cin >> n >> q;
    vector<vector<int>> a(n);
    while (q--)
    {
        int type;
        cin >> type;
        if (type == 0){
            int i, x;
            cin >> i >> x;
            a[i].push_back(x);
        }
        else if (type == 1){
            int i;
            cin >> i;
            if (a[i].size() != 0)
            {
                for (int j = 0; j < a[i].size(); j++)
                {
                    cout << a[i][j];
                    if (j != a[i].size() - 1) {
                        cout << " ";
                    }
                }
            }
            cout << endl;
        }else if (type == 2){
            int i;
            cin >> i;
            a[i].clear();
        }
    }
    return 0;
}