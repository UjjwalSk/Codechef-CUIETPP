#include<bits/stdc++.h>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {
    string main, test;
    bool arr[26] = {}, flag;
    cin >> main;
    for (char c : main)
        arr[c - 'a'] = 1;
    TC() {
        flag = 1;
        cin >> test;
        for (char c : test) {
            if (!arr[c - 'a']) {
                flag = 0;
                break;
            }
        }
        cout << (flag ? "Yes" : "No") << endl;

    }
    return 0;
}