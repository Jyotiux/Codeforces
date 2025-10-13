#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> odd;
        long long total_sum = 0;

        for(int i=0; i<n; i++){
            long long x; 
            cin >> x;
            if(x % 2 == 1) odd.push_back(x);
            else total_sum += x;
        }

        if(odd.empty()){
            cout<< 0 << "\n";
            continue;
        } else{
        sort(odd.begin(), odd.end());
        total_sum+=odd.back();
        odd.pop_back();
        int sz = odd.size() / 2;
while (sz) {
    total_sum += odd.back();
    odd.pop_back();
    sz--;
}

        cout << total_sum << "\n";
    }

        
    }

    return 0;
}
