#include <iostream>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {

    int lucky = 0, unlucky = 0;
    int weapons;
    TC() {
        cin >> weapons;
        if (weapons % 2) {
            ++unlucky;
        } else {
            ++lucky;
        }
    }
    cout << (lucky > unlucky ? "READY FOR BATTLE" : "NOT READY") << endl;

    return 0;

}
