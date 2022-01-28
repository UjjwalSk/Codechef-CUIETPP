<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0;i < n;i++)
        {
            cin >> arr[i];
        }
        int mindif = INT_MAX;
        for (int i = 0;i < n - 1;i++)
        {
            for (int j = i + 1;j < n;j++)
            {
                mindif = min(mindif, abs(arr[j] - arr[i]));
            }
        }
        cout << mindif << endl;
    }
    return 0;
=======
#include<bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0;i < n;i++)
        {
            cin >> arr[i];
        }
        int mindif = INT_MAX;
        for (int i = 0;i < n - 1;i++)
        {
            for (int j = i + 1;j < n;j++)
            {
                mindif = min(mindif, abs(arr[j] - arr[i]));
            }
        }
        cout << mindif << endl;
    }
    return 0;
>>>>>>> b55aab740cc3297310ea9aee950e322b6c14ece6
}