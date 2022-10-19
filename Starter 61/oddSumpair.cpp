#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	   int a,b,c;
	   cin>>a>>b>>c;
	   
	   cout<<(!((a%2==0&&b%2==0&&c%2==0)||(a%2!=0&&b%2!=0&&c%2!=0))?"YES\n":"NO\n");
	    
	}
	return 0;
}
