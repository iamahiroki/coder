#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    int a, b;
    vector<vector<int>> A(n);
    for (int i =0;i<m;i++) {
        cin >> a >> b;
        A[a-1].push_back(b-1);
        A[b-1].push_back(a-1);
        if (A[a-1].size()>2||A[b-1].size()>2) {
            cout << "No1" << endl;
            return 0;
        }
    }

    if (m != n - 1) {
        cout << "No" << endl;
        return 0;
    }

    int start = -1;
    for (int i =0;i<m-1;i++) {
        if (A[i].size()==1) {
            start = i;
        }
    }

    // 連結確認(DFSが必要)

    // 以下は失敗例
    // int now = start;
    // int count = 0;
    // for (int i=0;i<n;i++) {
    //     for (int j=0;j<A[i].size();j++) {
    //         if (now!=A[now][j]) {
    //             now = A[now][j];
    //         }
    //     }
    //     count++;
    //     if (A[now].size()==1) {
    //         break;
    //     }
    // }
    // if (count<m) {
    //     cout << "No3"<< endl;
    //     cout << count << " " << m << endl;
    //     return 0;
    // }
    
    cout << "Yes" << endl;
    return 0;
}