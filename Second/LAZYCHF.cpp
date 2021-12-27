#include <iostream>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {

    TC() {
        int x, m, d;
        cin >> x >> m >> d;
        cout << min(x * m, x + d) << endl;
    }

    return 0;

}
