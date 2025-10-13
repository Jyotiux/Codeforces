#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> v(n);

        // Read input
        for (auto &vi : v) {
            int k;
            cin >> k;
            vi.resize(k);
            for (auto &x : vi) cin >> x;
        }

        // Sort by increasing length (greedy: shorter arrays go on top)
        sort(v.begin(), v.end(), [](const vector<int> &a, const vector<int> &b) {
            return a.size() < b.size();
        });

        int m = v.back().size();  // max width
        vector<int> ans(m, 1e9);  // initialize with large values
        vector<int> edit = {0};   // track prefix changes

        for (auto &vi : v) {
            int k = vi.size();
            for (int e = 0; e < (int)edit.size(); ++e) {
                int l = edit[e];
                int r = (e + 1 < (int)edit.size()) ? edit[e + 1] : k;
                bool replace = false;

                for (int i = l; i < r; ++i) {
                    if (ans[i] < vi[i]) break;         // current ans is better
                    if (ans[i] > vi[i]) {              // new array is better
                        replace = true;
                        break;
                    }
                }

                if (replace) {
                    for (int i = l; i < k; ++i) {
                        ans[i] = vi[i];
                    }

                    // Remove edit points beyond l
                    while (!edit.empty() && edit.back() > l) edit.pop_back();
                    edit.push_back(k);
                    break;
                }
            }
        }

        // Output result
        for (int i = 0; i < m; ++i) {
            cout << ans[i] << (i + 1 == m ? '\n' : ' ');
        }
    }

    return 0;
}
