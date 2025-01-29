#include <iostream>
#include <string>
using namespace std;

int main() {
    string year;
    cin >> year;
    int year_set[] = {year[0] - '0', year[1] - '0', year[2] - '0', year[3] - '0'};
    
    for (int i = year_set[0]; i <= 9; i++) {
        for (int j = (i == year_set[0] ? year_set[1] : 0); j <= 9; j++) {
            for (int k = (i == year_set[0] && j == year_set[1] ? year_set[2] : 0); k <= 9; k++) {
                for (int l = (i == year_set[0] && j == year_set[1] && k == year_set[2] ? year_set[3] + 1 : 0); l <= 9; l++) {
                    if ((i != j) && (i != k) && (i != l) && (j != k) && (j != l) && (k != l)) {
                        cout << i << j << k << l << endl;
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}