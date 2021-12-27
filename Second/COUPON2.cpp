#include <iostream>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {

    int D, C, A1, A2, A3, A, B;
    TC() {
        cin >> D >> C >> A1 >> A2 >> A3;
        A = A1 + A2 + A3;
        cin >> A1 >> A2 >> A3;
        B = A1 + A2 + A3;
        if (A < 150) C += D;
        if (B < 150) C += D;

        if (C < 2 * D) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;

}
