#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,p,q,r,s;
    cin >> n >> p >> q >> r >> s;
    int A[n];
    for (int i=0;i<n;i++) {
        cin >> A[i];
    }

    int B[n];
    for(int i=0;i<n;i++) {
        if(p-1<=i&&q-1>=i) {
            B[i] = A[i+(r-p)];
        } else if (r-1<=i&&s-1>=i) {
            B[i] = A[i-(r-p)];
        } else {
            B[i] = A[i];
        }
    }

    for (int i =0;i<n;i++) {
        cout << B[i] << " ";
    }
     return 0;
}