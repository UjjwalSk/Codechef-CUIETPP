<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int M, x, y;
        int a[101] = { 0 };
        cin >> M >> x >> y;
        int b[101];
        for (int i = 0;i < M;i++) {
            cin >> b[i];
        }
        int d = x * y;
        int count = 0;
        for (int i = 1;i < 101;i++) {
            int flag = 1;
            for (int j = 0;j < M;j++) {
                if ((i >= b[j] - d) && (i <= b[j] + d)) flag = 0;
            }
            if (flag == 1) count++;
        }
        cout << count << endl;

    }
    return 0;
}
=======
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int M, x, y;
        int a[101] = { 0 };
        cin >> M >> x >> y;
        int b[101];
        for (int i = 0;i < M;i++) {
            cin >> b[i];
        }
        int d = x * y;
        int count = 0;
        for (int i = 1;i < 101;i++) {
            int flag = 1;
            for (int j = 0;j < M;j++) {
                if ((i >= b[j] - d) && (i <= b[j] + d)) flag = 0;
            }
            if (flag == 1) count++;
        }
        cout << count << endl;

    }
    return 0;
}
>>>>>>> b55aab740cc3297310ea9aee950e322b6c14ece6
