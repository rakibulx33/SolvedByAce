#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        long long x;
        cin >> x;
        long long count = 0;
        long long p = 1;
        
        while (p < x) {
            if ((p & x) == 0) {
                count += p;
            }
            p <<= 1;
        }
        
        cout << count << endl;
    }
    
    return 0;
}