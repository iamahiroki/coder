#include <bits/stdc++.h>

using namespace std;

int main() {
    int64_t X,A,D,N;
    cin >> X >> A >> D >> N;

    int64_t s = A;
    int64_t e = A+D*(N-1);
    if (s>e) {
        int64_t i;
        i = s;
        s = e;
        e = i;
    }

    int64_t xs = X - s;
    int64_t ex = e - X;
    if (xs<=0) {
        cout << abs(xs) << endl;
        return 0;
    }
    if (ex<=0) {
        cout << abs(ex) << endl;
        return 0;
    }

    int64_t a;
    if (xs < ex) {
        a = xs % (abs(D));
    } else {
        a = ex % (abs(D));
    }

    cout << (abs(D)-a<a-0?abs(D)-a:a-0) << endl;
    return 0;
}