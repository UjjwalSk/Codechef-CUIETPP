#include <bits/stdc++.h>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {

    TC() {
        int n;
        cin >> n;
        int first = int(n / pow(10, int(log10(n))));
        int last = n % 10;
        cout << first + last << endl;
    }

    return 0;

}
