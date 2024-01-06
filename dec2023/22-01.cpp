// Codes Of Harsha Pareek
// Problem Statement :
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool found = false;

void solve(int i, int ans, int arr[], int x, int n) {
    if (ans == x && i == n) {
        found = true;
        return;
    } else if (i >= n) {
        return;
    }

    // Put a + sign
    solve(i + 1, ans + arr[i], arr, x, n);

    // Put a - sign
    solve(i + 1, ans - arr[i], arr, x, n);
}

int main() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    solve(1, arr[0], arr, x, n);

    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
