#include <iostream>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {

    TC() {
        long long N, left = 1, right = 1e9, mid, res = 1;
        cin >> N;
        while (left <= right) {
            mid = left + (right - left) / 2;
            if ((mid * (mid + 1) / 2) <= N) {
                res = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        cout << res << endl;
    }

    return 0;

}