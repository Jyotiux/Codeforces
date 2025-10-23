#include <bits/stdc++.h>
using namespace std;

template<typename T>
istream& operator>>(istream& is, vector<T>& v) { 
    for (auto& x : v) is >> x; 
    return is; 
}

void solve() {
    long long n, q; 
    cin >> n >> q;
    vector<long long> a(n); 
    cin >> a;

    map<long long, vector<long long>> m;
    for (long long i = 0; i < n; i++) 
        m[a[i]].push_back(i);

    while (q--) {
        long long k, l, r; 
        cin >> k >> l >> r;
        l--; 
        r--;
        long long ans = 0;

        while (l <= r) {
            long long t = r + 1;
            for (long long d = 1; d * d <= k; d++) {
                if (k % d == 0) {
                    vector<long long>& b = m[d];
                    auto it = lower_bound(b.begin(), b.end(), l);
                    t = min(t, it == b.end() ? r + 1 : *it);

                    vector<long long>& c = m[k / d];
                    it = lower_bound(c.begin(), c.end(), l);
                    t = min(t, it == c.end() ? r + 1 : *it);
                }
            }
            ans += (t - l) * k;
            if (t <= r) {

                
                while (k % a[t] == 0)
                    k /= a[t];
            }
            l = t;
        }
        cout << ans << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long t = 1;
    cin >> t;
    while (t--) solve();
}
