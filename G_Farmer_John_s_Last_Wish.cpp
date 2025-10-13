#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        // Read the input array
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        vector<int> result;
        // Process each prefix
        for (int i = 0; i < n; ++i)
        {
            // Step 1: Copy prefix a[0..i]
            vector<int> prefix(a.begin(), a.begin() + i + 1);

            // Step 2: Sort prefix in descending order
            sort(prefix.begin(), prefix.end(), greater<int>());

            // Now you can proceed to compute GCD as you build it
            int max_k = 0;
            int gcd_so_far = prefix[0];
            for (int j = 1; j < prefix.size(); ++j)
            {
                int new_gcd = __gcd(gcd_so_far, prefix[j]);
                if (new_gcd < gcd_so_far)
                {
                    max_k = j; // j is k where drop happens
                }
                gcd_so_far = new_gcd;
            }

            int g_i = max_k; // result for the i-th prefix

            result.push_back(g_i);
        }
        for (int x : result)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
