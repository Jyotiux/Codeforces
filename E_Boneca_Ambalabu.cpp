#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define ia(a, n) vector<int> a(n); f(i, n) cin >> a[i]

void solve() {
    int n;
    cin >> n;
    ia(a, n);

    int fr[30] = {}; // Frequency of bits set at each position

    // Count how many numbers have each bit set
    f(i, n) {
        f(j, 30) {
            if ((a[i] >> j) & 1) {
                fr[j]++;
            }
        }
    }

    int ans = 0;
    f(i, n) {
        int sum = 0;
        f(j, 30) {
            int bit = 1 << j;
            if ((a[i] >> j) & 1) {
                sum += bit * (n - fr[j]); // XOR with numbers not having bit set
            } else {
                sum += bit * fr[j];       // XOR with numbers having bit set
            }
        }
        ans = max(ans, sum);
    }

    cout << ans << endl;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
