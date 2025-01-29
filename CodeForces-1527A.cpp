#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        int ans = 0;
        for (int i = 0;i<30; i++)
        {
            if (((a>>i)&1)==1)
            {
                ans = i;
            }
        }
        cout << (1<<ans)-1 << endl;
    }
    return 0;
}