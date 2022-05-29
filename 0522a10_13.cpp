#include<iostream>

using namespace std;

int main()
{
	int n,a[100],t,cnt=0;
	cin>>n;
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
	for(int i=0;i<n;i++){
		if(i==0||a[i]!=a[i-1]){
			cnt++;
		}
	}
	cout<<cnt<<endl;
	for(int i=0;i<n;i++){
		if(i==0||a[i]!=a[i-1]){
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
