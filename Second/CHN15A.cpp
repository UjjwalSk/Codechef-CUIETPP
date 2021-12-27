#include <iostream>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {

    TC() {
        int n, k;
        cin >> n >> k;
        int arr[n], res = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            if ((arr[i] + k) % 7 == 0) {
                ++res;
            }
        }
        cout << res << endl;
    }

    return 0;

}
