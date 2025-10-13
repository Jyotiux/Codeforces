#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();  // Consume the newline after t

    while (t--) {
        string s, p;
        getline(cin, s);  // Original string
        getline(cin, p);  // Pattern string to match

        int i = 0, j = 0;  // Pointers for s and p respectively
        bool failed = false;

        // Iterate over both strings until we reach the end of either
        while (i < s.size() && j < p.size()) {
            // **Check if current characters match**
            if (s[i] != p[j]) {
                // If characters differ, order is broken → no match
                failed = true;
                break;
            }

            // **Count consecutive occurrences of s[i] in s**
            int si = i;
            while (si < s.size() && s[si] == s[i]) si++;
            int scount = si - i;  // Number of repeated chars in s at position i

            // **Count consecutive occurrences of p[j] in p**
            int pj = j;
            while (pj < p.size() && p[pj] == p[j]) pj++;
            int pcount = pj - j;  // Number of repeated chars in p at position j

            // **Check repetition constraint:**
            // The pattern (p) must have at least as many repeats as s for this character group.
            // If pattern has fewer, pattern can't represent the group in s.
            if (pcount < scount || pcount>2*scount) {
                failed = true;
                break;
            }

            // **Move pointers forward to next character groups**
            i = si;
            j = pj;
        }

        // **After loop, check if both strings are fully consumed**
        // If either string has leftover characters, it's a mismatch
        if (i != s.size() || j != p.size()) {
            failed = true;
        }

        cout << (failed ? "NO" : "YES") << endl;
    }

    return 0;
}
