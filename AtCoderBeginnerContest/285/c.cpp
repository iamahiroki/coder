#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;

    cin >> s;

    int64_t ans = 0;
    for (int i = s.size()-1;i>=0;i--) {
        int64_t a = pow(26, i);
        int64_t b = s.at(s.size()- i -1)-'A'+1;
        ans +=  a *b;
    }
    cout << ans << endl;
    return 0;
}