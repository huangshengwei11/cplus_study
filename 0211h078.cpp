#include <iostream>

using namespace std;

int main() {
	int n,a[100001],mina=0,ans=0,cnt=0,index;
	mina=100001;
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int j=1; j<=n; j++) {
		mina=100001;
		index=0;
		for(int i=1; i<=n; i++) {
			if(a[i]<mina && a[i]>0) {
				mina=a[i];
				index=i;
			}
		}
		if(index==0) break;
		a[index]=-1; 
		for(int q=1; q<=n; q++) {
			if(a[q]==2*mina) {
				ans++;
				a[q]=-1;
				break;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
