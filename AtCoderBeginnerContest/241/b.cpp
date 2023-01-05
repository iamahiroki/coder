#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    map<int, int> A;
    map<int, int> B;

    int num;
    for (int i=0;i<n;i++) {
        cin >> num;
        if (A.count(num)==0) {
            A[num]=1;
        } else {
            A[num]++;
        }
    }
    
    for (int i=0;i<m;i++) {
        cin >> num;
        if (B.count(num)==0) {
            B[num]=1;
        } else {
            B[num]++;
        }
    }
    
    for (auto iter = B.begin();iter!=B.end();iter++) {
        if (A.count(iter->first)==0) {
            cout << "No" << endl;
            return 0;
        }
        if (A[iter->first]<iter->second) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}