#include<iostream>

using namespace std;

int main(){
	int n,a[10000],tmp;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int j=0;j<n-1;j++){
		if(a[j]>a[j+1]){
			tmp=a[j];
			a[j]=a[j+1];
			a[j+1]=tmp;
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
		if(i!=n-1) cout<<",";
	}
	return 0;
}
