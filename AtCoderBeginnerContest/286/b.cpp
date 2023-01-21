#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;

    cin >> n >> s;
    string d = "";
    for (int i=0;i<n-1;i++) {
        if (s[i]=='n') {
            d+='n';
             if (s[i+1]=='a') {
                    d+='y';
                }
        } else {
            d+=s[i];
        }
    }
    d+=s[n-1];

    cout << d << endl;
    return 0;
}