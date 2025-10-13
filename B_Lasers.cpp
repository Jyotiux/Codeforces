#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int n,m,x2,y2;
        cin>>n>>m>>x2>>y2;
        vector<int>h(n);
        vector<int>v(m);
        for(int j=0;j<n;j++)cin>>h[j];
        for(int k=0;k<m;k++)cin>>v[k];
        cout<<n+m<<endl;
    }

    return 0;
}