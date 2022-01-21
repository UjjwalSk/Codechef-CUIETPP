#include <iostream>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {

    TC() {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        int l = 0, r = n - 1, flag = (arr[0] == 1);
        if (flag) {
            while (l < r) {
                if (arr[l] != arr[r] || arr[l + 1] - arr[l] > 1) {
                    flag = 0;
                    break;
                }
                l++;
                r--;
            }
        }

        cout << (flag && arr[l] == 7 ? "yes" : "no") << endl;
    }

    return 0;

}