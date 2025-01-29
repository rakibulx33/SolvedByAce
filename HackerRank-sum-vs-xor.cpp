#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long count = 0;
    for (long long i = 0; (1LL << i) <= n; i++)
    {
        if ((n & (1LL << i)) == 0)
        {
            count++;
        }
    }
    cout << (1LL << count) << endl;
    
    return 0;
}