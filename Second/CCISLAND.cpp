#include <iostream>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {

    TC() {
        int x, y, xR, yR, D;
        cin >> x >> y >> xR >> yR >> D;
        x /= xR; y /= yR;
        if (min(x, y) >= D) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;

}
