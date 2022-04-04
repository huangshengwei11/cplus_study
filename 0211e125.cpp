#include <iostream>

using namespace std;

int main(){
	long long l,k,n,ans=0;
	int a[100000];
	cin>>l>>k>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	ans=ans+(a[0]-1)/k;
	for(int i=1;i<n;i++){
		ans=ans+(a[i]-a[i-1]-1)/k;
	}
	ans=ans+(l-a[n-1])/k;
	cout<<ans<<endl;
	return 0;
}
