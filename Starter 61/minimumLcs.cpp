#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a,b;
	    cin>>a>>b;
	    
	    map<char,int>m1,m2;
	    for(int i=0;i<n;i++){
	        m1[a[i]]++;
	        m2[b[i]]++;
	    }
	    
	    int ans=0;
	    
	    for(auto x:m1){
	        int temp;
	        if(x.second<=m2[x.first]){
	            temp=x.second;
	        }
	        else{
	            temp=m2[x.first];
	        }
	        
	        ans=max(ans,temp);
	    }
	    
	    cout<<ans<<'\n';
	    
	}
	return 0;
}
