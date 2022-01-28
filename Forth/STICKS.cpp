<<<<<<< HEAD
#include <iostream>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {

    TC() {
        int n = 0, first = 0, second = 0;
        cin >> n;
        int arr[1000] = { 0 };
        for (int i = 0;i < n;++i) {
            int val = 0;
            cin >> val;
            ++arr[val - 1];
            if ((arr[val - 1] == 2 || arr[val - 1] == 4)) {
                if (first < val) {
                    second = first;
                    first = val;
                } else if (second < val) {
                    second = val;
                }
            }
        }
        cout << (first && second ? (first * second) : -1) << endl;
    }

    return 0;

=======
#include <iostream>
using namespace std;

#define TC() int t; cin>>t; while(t--)

int main() {

    TC() {
        int n = 0, first = 0, second = 0;
        cin >> n;
        int arr[1000] = { 0 };
        for (int i = 0;i < n;++i) {
            int val = 0;
            cin >> val;
            ++arr[val - 1];
            if ((arr[val - 1] == 2 || arr[val - 1] == 4)) {
                if (first < val) {
                    second = first;
                    first = val;
                } else if (second < val) {
                    second = val;
                }
            }
        }
        cout << (first && second ? (first * second) : -1) << endl;
    }

    return 0;

>>>>>>> b55aab740cc3297310ea9aee950e322b6c14ece6
}