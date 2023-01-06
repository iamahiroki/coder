#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<int, int> A;
    map<int, int> B;

    int num;
    for (int i=0;i<n;i++) {
        cin >> num;
        if (A.count(num)==0) A[num] = i;
    }

    for (int i=0;i<n;i++) {
        cin >> num;
        if (B.count(num)==0) B[num] = i;
    }

    int counta = 0;
    int countb = 0;
    for (auto iter = A.begin(); iter!=A.end();iter++) {
        if (B.count(iter->first)==0) continue;
        if (B[iter->first]==A[iter->first]) {
            counta++;
            continue;
        }
        countb++;
    }

    cout <<counta <<endl;
    cout << countb << endl;



    return 0;
}