#include <bits/stdc++.h>

using namespace std;

int main() {
    int a[10];
    for (int i=0;i<10;i++) {
        cin >> a[i];
    }
    int aa = 0;
    for (int i=0;i<3;i++) {
        aa = a[aa];
    }
    cout << aa << endl;
    return 0;
}