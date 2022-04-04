#include <iostream>

using namespace std;

int main(){
	int n,p,a[100];
	cin>>n;
	for(int i=0; i<n; i++) a[i]=i+1;
	p=0;
	for(int i=0;i<n-1;i++){
		while(a[p]==0) {
			p=(p+1)%n;
		}
		p=(p+1)%n;
		while(a[p]==0) {
			p=(p+1)%n;
		}
		a[p]=0;		
	}
	for(int i=0;i<n;i++){
		if(a[i]!=0) cout<<a[i]<<endl;
	}	
	
	return 0;
}
