#include <bits/stdc++.h>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {

    TC() {
        long long int x, y, gcd;
        cin >> x >> y;
        cout << __gcd(x, y) << " " << x * y / __gcd(x, y) << endl;
    }

    return 0;

}
