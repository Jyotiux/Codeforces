#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        if(m%k==0){
            for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<(1+(i+j)%k)<<" ";
            }
            cout<<endl;
        }
        }
        else{
            for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<(1+(m*i+j)%k)<<" ";
            }
            cout<<endl;
        }
        }
        
        }
    return 0;
}