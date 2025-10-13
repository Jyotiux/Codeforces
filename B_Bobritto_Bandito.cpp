#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m,l,r;
        cin>>n>>m>>l>>r;
        ll l_prime=min(m,-l);
        ll r_prime=m-l_prime;
        // so sum of l_prime and r_prime stays m and it stays within [l,r] range.As,minimum of m and mod of l is taken. For r, m-(that l_prime)

        cout << -l_prime << " " << r_prime << "\n";
    }
    return 0;
}