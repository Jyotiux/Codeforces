#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        // vector<vector<int>> grid(n,vector<int>(n));
        vector<int>ans(2*n);
        int sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int val;
                cin>>val;

                if(ans[i+j]==NULL){
                    ans[i+j]=val;
                    sum+=val;
                }
                
            }
        }
        int sumcal=2*n*(2*n+1)/2;
        ans.insert(ans.begin(), sumcal-sum);

        for(int k=0;k<2*n;k++){
            cout<<ans[k]<<" ";
        }
        cout<<endl;
        
    }


    return 0;

}