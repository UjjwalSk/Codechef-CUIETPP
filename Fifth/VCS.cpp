#include <iostream>
#include <vector>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {

    int n, m, k, temp;
    TC() {
        cin >> n >> m >> k;
        vector<int> res(n + 1, 0);
        for (int i = 0;i < m;++i) {
            cin >> temp;
            ++res[temp];
        }
        for (int i = 0;i < k;++i) {
            cin >> temp;
            ++res[temp];
        }

        int o1 = 0, o2 = 0;
        for (int i = 1;i <= n;++i) {
            if (res[i] == 2) {
                ++o1;
            } else if (res[i] == 0) {
                ++o2;
            }
        }
        cout << o1 << " " << o2 << endl;
    }

    return 0;

}
