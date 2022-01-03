#include <iostream>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {

    TC() {
        int n;
        string str;
        cin >> n >> str;
        int isHead = 1;
        for (char c : str) {
            if (c != '.') {
                if ((isHead && c == 'T') || (!isHead && c == 'H')) {
                    isHead = 0;
                    break;
                }
                isHead = !isHead;
            }
        }
        cout << (isHead ? "Valid" : "Invalid") << endl;
    }

    return 0;

}
