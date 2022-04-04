#include <iostream>

using namespace std;

int main(){
	int A,B,n,a[100],b[100],ro=0,rt=0,c[101],d[101];
	cin>>n>>A>>B;
	for(int i=0;i<A;i++){
		cin>>a[i];
	}
	for(int i=0;i<B;i++){
		cin>>b[i];
	}
	for(int i=1;i<=n;i++){
		c[i]=a[(i-1)%A];
		d[i]=b[(i-1)%B];
	}
	for(int i=1;i<=n;i++){
		if(c[i]==0 && d[i]==2 || c[i]==2 && d[i]==5 || c[i]==5 && d[i]==0) ro++;
		if(c[i]==2 && d[i]==0 || c[i]==5 && d[i]==2 || c[i]==0 && d[i]==5) rt++;
	}
	
	if(ro>rt) cout<<"A"<<endl;
	if(rt>ro) cout<<"B"<<endl;
	if(ro==rt) cout<<"draw"<<endl;
	return 0;
}
