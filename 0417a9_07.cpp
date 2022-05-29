#include<iostream>

using namespace std;

int main(){
	int n,a[100],max=0,ans=0; 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>a[max]){
			max=i;
		}
	}
	for(int i=0;i<n;i++){
		if(a[i]!=a[max]){
			ans+=a[i];
		}
	}
	cout<<ans<<endl;
	return 0;
}
