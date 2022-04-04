#include<iostream>

using namespace std;

int main(){
	int n,a[10][10];
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i][i]<<" ";
	}
	cout<<""<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i][n-1-i]<<" ";
	}
	return 0;
}
