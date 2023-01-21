// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n,x;
//     cin >> n >> x;
//     vector<int> C(10001,0);
//     int a,b;
//     for (int i=0;i<n;i++) {
//         cin >> a;
//         cin >> b;
//         for (int j=1;j<=10001;j++) {
//             if (C[j]==1) {
//                 for (int k=1;k<=b;k++) {
//                 if (a*k+j<=10000) {
//                     C[a*k+j]=1;
//                 }
//                 }
//             }
//         }
//         for (int j=1;j<=b;j++) {
//             if (a*j<=10000) {
//                 C[a*j]=1;
//             }
//         }
//     }
//     // for (int i=1;i<100;i++) {
//     //     cout << C[i] << endl;
//     // }
//     if (C[x]==1) {
//         cout << "Yes" << endl;
//     } else {
//         cout << "No" << endl;
//     }
//     return 0;
// }