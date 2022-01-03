#include <iostream>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {

    string s1, s2;
    bool flag;
    TC() {
        cin >> s1 >> s2;
        flag = 0;
        for (int i = 0; i < s1.size(); ++i) {
            if (s1[i] == '?' or s2[i] == '?') flag = 1;
            else flag = (s1[i] == s2[i]);

            if (!flag) break;
        }
        cout << (flag ? "Yes" : "No") << endl;
    }

    return 0;

}
