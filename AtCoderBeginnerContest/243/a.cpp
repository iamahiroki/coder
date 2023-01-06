#include <bits/stdc++.h>

using namespace std;

int main() {
    int v, a, b, c;
    cin >> v;
    int I[3];
    for (int i =0;i<3;i++) {
        cin >> I[i];
    }
    char A[3] = {'F', 'M', 'T'};
    while(1) {
        for (int i = 0;i<3;i++) {
            if (v-I[i]<0) {
                cout << A[i] << endl;
                return 0;
            }
            v-=I[i];
        }
    }
    return 0;
}