#include <bits/stdc++.h>

using namespace std;

int main() {
    int64_t n,a,b;
    string s;

    cin >> n >> a >> b >>s;
    string ss = s+s;

    int64_t max =1000000000000000000;
    int64_t aaa =0;
    int64_t A[n];
    for (int i=0;i<n;i++) {
        int m =0;
        int v = s.size()-1;

        for(int j=0;j<(n/2);j++) {
            if (ss[i+j]==ss[i+j+v]) {
                m++;
                m++;
            } else {
                m++;
            }
            v--;
            v--;
        }
        if (n%2!=0) {m++;}
        A[i] = m;
    }
    // cout << max << " "<<aaa << endl;
    int64_t B[n];
    for (int i=0;i<n;i++) {
        B[i] = i * a + b*(n-A[i]);
        if (B[i]<max) {
            max = B[i];
        }
    }
    if (((n/2)*b)<max) {
        cout << ((n/2)*b) << endl;
    } else {
        cout << max << endl;
    }
    

    return 0;
}