#include<iostream>
using namespace std;

int main()
{	
	int n;
	cin>>n;
	char a[100],t;
	for(int i=0;i<n*n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n*n-1;i++){
		for(int j=0;j<n*n-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i*n+j];
		}
		cout<<endl;
	}
	return 0;
}
