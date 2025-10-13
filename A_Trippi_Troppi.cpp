#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // flush newline

    while (t--) {
        string line;
        getline(cin, line); // read one test case line
        
        stringstream ss(line);
        string word;
        string ans;
        
        while (ss >> word) {
            ans.push_back(word[0]);
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
