#include<iostream>
using namespace std;

int main()
{	
	int n,t,ans,cnt[257];
	cin>>n;
	if(n<=5000){
		int a[5000];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			for(int j=0;j<n-1;j++){
				if(a[j]>a[j+1]){
					t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;		
				}
			}
		}
		ans=1;
		for(int i=1;i<n;i++){
			if(a[i]==a[i-1]) {
				ans++;
				if(i==n-1) cout<<a[i]<<" "<<ans<<endl;
			}
			else {
				cout<<a[i-1]<<" "<<ans<<endl;
				ans=1;
				if(i==n-1) cout<<a[i]<<" "<<ans<<endl;
			}
		}
	}
	else{
		int input;
		for(int i=0;i<n;i++){
			cin>>input;
			cnt[input]++;
		}
		for(int i=1;i<=256;i++){
			if(cnt[i]!=0){
				cout<<i<<" "<<cnt[i]<<endl;
			}
		}
	}
	return 0;
}
