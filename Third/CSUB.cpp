#include <iostream>
using namespace std;

#define TC() int t; cin>>t; while(t--)
typedef long long ll;

ll eval(string s, int l) {
    ll cnt = 0;
    for (char c : s)
        if (c == '1') ++cnt;
    return cnt * (cnt + 1) / 2;
}

int main() {

    int len;
    string str;
    TC() {
        cin >> len >> str;
        cout << eval(str, len) << endl;
    }

    return 0;

}
