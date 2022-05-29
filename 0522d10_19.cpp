#include<iostream>
using namespace std;

int main()
{	
	int t,n,a[10000],cnt[10001];
	cin>>t;
	bool flag;
	for(int j=0;j<t;j++){
		cin>>n;
		for(int i=0;i<10001;i++){
			cnt[i]=0;
		}
		flag=true;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cnt[a[i]]++;
		}
		for(int i=1;i<=n;i++){
			if(cnt[i]!=1){
				flag=false;
				cout<<"NO"<<endl;
				break;
			}
		}
		if(flag) cout<<"YES"<<endl;
	}
	
	return 0;
}
