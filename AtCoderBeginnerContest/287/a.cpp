#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0,b=0;
    string z;
    for (int i=0;i<n;i++) {
        cin >> z;
        if (z == "For") {
            a++;
        } else {
            b++;
        }
    }

    if (a>b) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}