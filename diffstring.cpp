#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    int ans=n-1;
	    
	    for(int i=0;i<n-1;i++){
	        if(s[i]!=s[i+1])ans--;
	    }
	    
	    cout<<ans<<'\n';
	}
	return 0;
}
