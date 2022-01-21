#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, n, k, w[100], s1, s2, s;
    cin >> t;

    while (t--) {

        cin >> n >> k;
        s = s1 = s2 = 0;
        for (int i = 0; i < n; i++) {
            cin >> w[i];
            s += w[i];
        }
        sort(w, w + n);
        for (int i = 0; i < k; i++) {
            s1 += w[i];
            s2 += w[n - i - 1];
        }
        cout << max(abs(s - 2 * s1), abs(s - 2 * s2)) << endl;
    }

    return 0;
}