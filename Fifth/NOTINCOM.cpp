#include <iostream>
#include<map>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {
    TC() {
        int n, m, x;
        map<int, int> temp;
        cin >> n >> m;
        for (int i = 0; i < n + m; i++) {
            cin >> x;
            temp[x] += 1;
        }
        x = 0;
        for (auto e : temp) {
            if (e.second > 1) {
                ++x;
            }
        }
        cout << x << endl;
    }

    return 0;

}
