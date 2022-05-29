#include<iostream>
using namespace std;

int main()
{	
	int n,a[100],cnt[1001],m=0,ans=0;
	for(int i=1;i<=1000;i++) cnt[i]=0;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cnt[a[i]]++;
	for(int i=1;i<=1000;i++){
		if(cnt[i]!=0){
			ans++;
		}
	}
	cout<<ans<<endl;
	for(int i=1;i<=1000;i++){
		if(cnt[i]!=0){
			cout<<i<<" ";
		}
	}
	return 0;
}
