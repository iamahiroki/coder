// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n;
//     string s;
//     cin >> n;
//     cin >> s;

//     vector<int> A(n, -1);
//     for (int i=0;i<n-1;i++) {
//         for (int j = i +1;j<n;j++) {
//             if (s.at(i)==s.at(j)) {
//                 A[j-i] = i;
//             }
//         }
//     }

//     for (int i=1;i<n;i++) {
//         if (A[i]==-1) {
//             cout << n-i << endl;
//         } else {
//             cout << A[i] << endl;
//         }
//     }
//     return 0;
// }