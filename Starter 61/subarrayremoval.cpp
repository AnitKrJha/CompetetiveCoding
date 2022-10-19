#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int ans=0;
	    int a[n];
	   int current1=0,current0=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        a[i]==0?current0++:current1++;
	    }
	    
	   //for(int i=0;i<n;i++){
	   //    a[i]==0?current0++:current1++;
	   //    int temp=min(current1,current0);
	   //    ans+=min(current1,current0);
	   //    current1-=temp;
	   //    current0-=temp;
	   //}
	    
	    cout<<min(current1,current0)+(current1-min(current1,current0))/3<<'\n';
	}
	return 0;
}
