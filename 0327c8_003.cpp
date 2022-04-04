#include<iostream>

using namespace std;

int main(){
	int a[10][10],n,m,max[10];
	cin>>n>>m;
	for(int i=0;i<m;i++){
		max[i]=-100;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	} 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]>max[j]) max[j]=a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		cout<<max[i]<<" ";
	}
	return 0;
}
