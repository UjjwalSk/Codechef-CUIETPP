#include <iostream>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {

    TC() {
        int n, k;
        cin >> n >> k;
        int res = 0;
        for (int i = 1;i <= k;++i) {
            res = max(res, n % i);
        }
        cout << res << endl;
    }

    return 0;

}
