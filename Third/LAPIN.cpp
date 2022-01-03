#include <iostream>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {

    TC() {
        string str;
        cin >> str;
        bool flag = 1;
        int arr[26] = {};
        int s = 0, e = str.length() - 1;
        while (s < e) {
            ++arr[str[s++] - 'a'];
            --arr[str[e--] - 'a'];
        }
        for (int i : arr) {
            if (i) {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }

    return 0;

}
