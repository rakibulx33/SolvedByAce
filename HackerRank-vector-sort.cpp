#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> s;
    while (n--)
    {
        int x;
        cin >> x;
        s.push_back(x);
    }
    sort(s.begin(), s.end());
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}