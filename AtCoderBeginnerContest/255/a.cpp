#include <bits/stdc++.h>

using namespace std;

int main() {
    int r ,c;
    cin >> r >> c;

    int A[2][2];
    for (int i=0;i<2;i++) {
        for (int j=0;j<2;j++) {
            cin >> A[i][j];
        }
    }

    cout << A[r-1][c-1] << endl;
    return 0;
}