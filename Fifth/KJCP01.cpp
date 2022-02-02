#include <bits/stdc++.h>
using namespace std;

vector<int> v, freq, temp;
bool key(int a, int b) {
    if (freq[a] != freq[b])
        return freq[a] > freq[b];
    return temp[a] <= temp[b];
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0;i < m + 1;++i) {
        freq.push_back(0);
        temp.push_back(-1);
    }
    for (int i = 0;i < n;++i) {
        int a;
        cin >> a;
        v.push_back(a);
        ++freq[a];
        if (temp[a] == -1) {
            temp[a] = i;
        }
    }
    sort(v.begin(), v.end(), key);
    for (int i = 0;i < n;++i) {
        cout << v[i] << " ";
    }
    return 0;
}
