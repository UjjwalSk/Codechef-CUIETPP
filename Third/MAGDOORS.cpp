#include <iostream>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {

    TC() {
        string str;
        cin >> str;
        int res = str[0] == '0';
        for (int i = 1;i < str.size();++i) {
            if (str[i] != str[i - 1])
                ++res;
        }
        cout << res << endl;
    }

    return 0;

}
