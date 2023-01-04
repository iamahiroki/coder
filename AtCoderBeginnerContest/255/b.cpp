#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k;
    cin >> n>> k;
    int A[k];
    for (int i=0;i<k;i++) {
        cin >> A[i];
    }

    int D[n][2];
    for (int i=0;i<n;i++) {
        cin >> D[i][0];
        cin >> D[i][1];
    }


    vector<double> M(n, 10000000000);
    for (int i=0;i<k;i++) {
        M[A[i]-1] = -1;
    }

    //   for (int i=0;i<n;i++) {
    //     cout << M[i] << endl;
    // }

    for (int i=0;i<k;i++) {
        for (int j=0;j<n;j++) {
            if (M[j]==-1) continue;
            if (A[i]-1==j)continue;
            int64_t xd = D[A[i]-1][0]-D[j][0];
            int64_t yd = D[A[i]-1][1]-D[j][1];
            double minD = sqrt(xd*xd+yd*yd);
            // printf("%d %d ", A[i]-1, j);
            // printf("%d \n", xd);
            if (minD < M[j]) M[j]=minD;
        }
    }

    double max = -1;
    for (int i=0;i<n;i++) {
        if (M[i]==-1) continue;
        if (max < M[i]) max = M[i];
    }

    cout << max << endl;
    return 0;
}
