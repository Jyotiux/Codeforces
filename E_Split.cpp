#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int n,k;
    cin>>n>>k;
    int ans=0;
    if(n%k!=0)cout<<0<<endl;
    else{
    vector<int>arr(n);
    int m=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m=max(m,arr[i]);
    }
    int cnt=0;
    
        int i=0,j=0;
        vector<int> hash1(m+1, 0);
for(int x = i; x <= j; x++){
    hash1[arr[x]]++;
}

vector<int> hash2(m+1, 0);
for(int x = 0; x < i; x++){
    hash2[arr[x]]++;
}
for(int x = j+1; x < n; x++){
    hash2[arr[x]]++;
}

        for(int n=0;n<m;n++){
            if(hash1[n]!=hash2[n])break;
            else cnt++;
        }
        if(cnt==m)ans++;
        i++;
        j++;
    }
    cout<<ans<<endl;
}

    return 0;
}



// arr a, n +ves, int k
// subarr a[l,r]
// if i is in l to r then place ai in multiset1
// otherwise any

// awesome if some way to place same no of elements in multisets


// 3,2
// size of arr, no of multisets
// 1 1 1


// 4,2
// 1 2 1 2
// if n div by k else return 0
// pointers i,j
// cnt of each
// place 0,0 in 1st
// then if ant of placed is (k-1)*cnt of its in m1 else false; j++;
// two for loops i =0 <n, j=0 <n
// if true cnt++
