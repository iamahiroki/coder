// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;
    
//     vector<vector<char>> S(n, vector<char>(n));
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<n;j++) {
//             cin >> S[i][j];
//         }
//     }
    
//     // for (int i=0;i<n;i++) {
//     //     for (int j=0;j<n;j++) {
//     //         cout << S[i][j];
//     //     }
//     //     cout << endl;
//     // }
//     int count = 0;
//     for (int i=0;i<n;i++) {
//         for (int j=0;j<n;j++) {
//             if (S[i][j]!='#') continue;

//             if (i>=5) {                
//                 l = i;
//                 count = 0;
//                 for (int k = 0;k<5;k++) {
//                     l--;
//                     if (S[l][j]=='#') count++;
//                 }
//                 if (count>=3) {
//                     cout << "Yes" << endl;
//                     return 0;
//                 }
//             }


//         }
//     }

//     return 0;
// }