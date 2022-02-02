#include <iostream>
#include <map>
using namespace std;
typedef long long int LL;

#define TC() int t; cin>>t; while(t--)

int main() {

    TC() {
        int n, p; cin >> n >> p;
        map<int, int> s;
        int cs = 0, maxv = 0;
        LL maxvc = 0;
        for (int i = 0;i < n;++i) {
            ++s[cs];
            int w;
            cin >> w;
            w = w % p;
            cs = (cs + w) % p;

            int cv;
            auto it = s.upper_bound(cs);

            if (it == s.end()) {
                cv = cs;
                it = s.begin();
            } else
                cv = cs - it->first + p;

            if (cv > maxv)
                maxvc = 0, maxv = cv, maxvc += it->second;
            else if (cv == maxv)
                maxvc += it->second;
        }

        cout << maxv << " " << maxvc << endl;

    }

    return 0;

}
