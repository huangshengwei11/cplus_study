#include <iostream>

using namespace std;

int main(){
	int n,a[101],b[101],p,q; 
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	p=1;
	q=1;
	while(p<=n && q<=n){
		if(a[p]>b[q]) q++;
		else p++;
	}
	if(q>n) cout<<n-p+1<<endl;
	else cout<<n-q+1<<endl;
	return 0;
}
