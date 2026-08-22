
#include<bits/stdc++.h>
using namespace std;
int main(){
      int t;
      cin>>t;
      while(t--){
            vector<int> ans;
            int n,k;
            cin>>n>>k;
            if((n-k)%2==0 && n>=k){
                  for(int i=1; i<k; i++){
                        ans.push_back(1);
                  }
                  ans.push_back(n-k+1);
            }
            else if(n%2==0 && n>=2*k){
                  for(int i=1; i<k; i++){
                        ans.push_back(2);
                  }
                  ans.push_back(n-(2*k)+2);
            }
            else{
                  cout<<"NO"<<endl;
                  continue;
            }
            cout<<"YES"<<endl;
            for(auto it:ans){
                  cout<<it<<" ";
            }
            cout<<endl;
      }
}
