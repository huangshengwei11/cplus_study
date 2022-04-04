#include<iostream>

using namespace std;

int main(){
	int n,m,input,ans=0;
	cin>>n>>m;
	int a[1000];
	for(int i=0;i<n;i++) a[i]=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>input;
			if(input==1) a[j]++;
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]>m-a[i]) a[i]=1;
		else a[i]=0;
	}
	for(int i=0;i<n;i++){
		cin>>input;
		if(a[i]==input) ans++;
	}
	cout<<ans<<endl;
	return 0;
}
