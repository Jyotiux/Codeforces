#include <iostream>
#include <deque>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int q;
        cin >> q;

        deque<ll> arr[2];
        bool rev= false;

        ll rizz = 0;
        ll sum = 0;
        ll sum2=0;
        int n = 0;

        while (q--) {
            int op;
            cin >> op;

            if (op == 3) {
                ll k;
                cin >> k;            
                    n++;
                    rizz += k * n;
                    arr[rev].push_back(k);
                    arr[!rev].push_front(k);
                    sum2+=sum;
                    sum2+=(1-n)*k;
                    sum += k;
                cout << rizz << '\n';

            } else if (op == 2) { 
                rev = !rev;
                rizz+=sum2;
                sum2=-sum2;
                cout << rizz << '\n';

            } else {
                if (n == 0) {
                    cout << 0 << '\n';
                    continue;
                }
                    ll la = arr[rev].back();
                    sum2-=2*(sum-la);
                    sum2+=2*(n-1)*la;
                    rizz -= la * (n-1);
                    rizz += sum-la; 
                    arr[rev].pop_back();
                    arr[rev].push_front(la);
                    ll temp=arr[!rev].front();
                    arr[!rev].pop_front();
                    arr[!rev].push_back(temp);

                cout << rizz << '\n';
            }
        }
    }

    return 0;
}
