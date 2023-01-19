#include <bits/stdc++.h>

using namespace std;

int main() {
    int L, R;
    string S;

    cin >> L >> R >> S;
    string result = "";

    string a = S.substr(0, L-1);
    string b = S.substr(L-1, R-L+1);
    string c = S.substr(R, S.size()-1);

    reverse(b.begin(), b.end());

    result.append(a);
    result.append(b);
    result.append(c);

    cout << result << endl;
    return 0;
}