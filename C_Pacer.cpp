#include <bits/stdc++.h>
using namespace std;

int main(){
    int tn;
    cin>>tn;
    for(int i=0;i<tn;i++){
        int n,m;
        cin>>n>>m;
        int t=0,side=0,score=0;
        for(int j=0;j<n;j++){
        int a,b;
        cin>>a>>b;
        long long diff = a - t;
        if(side==b){
            score+=(diff/2)*2;
        }
        else{
            score+=1+((diff-1)/2)*2;
        }
        t=a;
        side=b;
        if(j==n-1)score+=(m-t);
        }

        cout << score << '\n';
        
    }

    return 0;
}