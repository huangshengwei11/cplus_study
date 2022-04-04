#include <iostream>

using namespace std;

int main(){
	long long	n,c;
	long long a[100001],b[100001],ans=0,tmp;
	a[0]=0;
	cin>>n>>c;
	tmp=c;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	for(int i=1;i<=n;i++){
		if(c>=b[i]){
			c=c-b[i];
			ans=ans+a[i]-a[i-1];
		}
		else {
			ans=ans+a[i-1]+a[i];
			c=tmp-b[i];
		}
	}
	ans=ans+a[n];
	cout<<ans<<endl;
	return 0;
}
