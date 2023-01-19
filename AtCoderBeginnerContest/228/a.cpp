#include <bits/stdc++.h>

using namespace std;

int main() {
    int s,t,x;
    cin >> s>> t >> x;
    
    if (s > t) {
        t+=24;
        if (s>x) {
            x += 24;
        }
    }


    if (s<=x &&x<t) {
        cout<<"Yes"<<endl;
        return 0;
    }
    cout << "No" << endl;

    return 0;
}