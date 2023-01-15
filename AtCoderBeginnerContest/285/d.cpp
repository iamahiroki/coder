// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     map<string, string> A;
//     string a,b;
//     map<string, string> B;
//     map<string, string> D;
//     for (int i=0;i<n;i++) {
//         cin >> a >>b;
//         A[a] = b;
//         B[a] = b;
//         D[b] = a;
//     }


//     for (auto iter=A.begin();iter!=A.end();iter++) {
//         if (B.count(iter->first)==0) {
//             continue;
//         }
//         string aa = iter->first;
//         string bb = iter->second;
//         while(1) {
//             if (B.count(bb)!=0) {
//                 B[aa] = B[bb];
//                 B.erase(bb);
//                 D[B[bb]] = aa;
                
                
//             } else if (D.count(B[aa])) {
//                 B[D[aa]] = bb;
//                 B.erase(bb);
//                 D[B[bb]] = D[aa];
                
//                 D.erase(aa);
//             } else {
//                 break;
//             }
//         }
//     }

//     map<string, int> C;
//     for (auto iter=B.begin();iter!=B.end();iter++) {
//         if (iter->first == iter->second) {
//             cout << "No" << endl;
//             return 0;
//         }
//         if (C.count(iter->second)==0) {
//             C[iter->second] = 1;
//         } else {
//             cout << "No" << endl;
//             return 0;
//         }
        
//     }


//     cout << "Yes" << endl;
//     return 0;
// }