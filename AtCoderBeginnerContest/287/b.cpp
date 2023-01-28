#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<string> S;
    vector<string> T;

    string a;
    string suba;
    for (int i=0;i<n;i++) {
        cin >> a;
        suba = a.substr(3);
        S.push_back(suba);
    }

    for (int i=0;i<m;i++) {
        cin >> a;
        T.push_back(a);
    }


    int count =0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (S[i] == T[j]) {
                count++;
                break;
            }
        }
    }

    cout << count << endl;

    return 0;
}