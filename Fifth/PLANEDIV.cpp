#include <bits/stdc++.h>
using namespace std;

#define TC() int t; cin>>t; while(t--)

long long int gcd(long long a, long long b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {

    TC() {
        int n;
        cin >> n;
        map<pair<long long int, long long int>, set<double>> maps;
        for (int i = 0;i < n;i++) {
            long long int a, b;
            double c;
            cin >> a >> b >> c;
            long long int g = gcd(a, b);
            if (g == 0) continue;
            a /= g;
            b /= g;
            c /= g;
            maps[{a, b}].insert(c);
        }
        long long ans = 0;
        for (auto it : maps) {
            long long val = it.second.size();
            ans = max(ans, val);
        }
        cout << ans << endl;
    }


    return 0;

}
