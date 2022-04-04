#include <iostream>

using namespace std;

int main(){
	int n,da=0,db=0;
	cin>>n;
	int a[101],b[101];
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++) cin>>b[i];
	for(int i=1;i<=n;i++){
		if(a[i]>da) da=a[i];
		if(b[i]>db) db=b[i];
	}
	if(da>db){
		for(int i=1;i<=n;i++){
			if(a[i]>db){
				cout<<n-i+1;
				break;
			}
		}
	}
	else{
		for(int i=1;i<=n;i++){
			if(b[i]>da){
				cout<<n-i+1;
				break;
			}
		}
	}
	return 0;
}
