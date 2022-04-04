#include <iostream>

using namespace std;

int main()
{
	int n,a[100001],ans=0,cnt=0,index,tmp;
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n-i; j++) {
			if(a[j]>a[j+1]) {
				tmp=a[j+1];
				a[j+1]=a[j];
				a[j]=tmp;
			}
		}
	}
	for(int j=1; j<=n; j++) {
		if(a[j]==-1) continue;
		for(int q=j+1; q<=n; q++) {
			if(a[q]==2*a[j]) {
				ans++;
				a[q]=-1;
				break;
			}
		}
		a[j]=-1;
	}
	cout<<ans<<endl;
	return 0;
}
