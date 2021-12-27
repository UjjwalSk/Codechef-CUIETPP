#include <iostream>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {

    TC() {
        int a, b, c;
        cin >> a >> b >> c;
        cout << ((a>b && a>c) ? ((b>c)?b:c) : (b>c && b>c)?(c>a)?c:a : (a>b)?a:b)<<endl;
    }

    return 0;

}
