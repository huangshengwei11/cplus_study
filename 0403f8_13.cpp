#include<iostream>

using namespace std;

int main(){
	int n,m,a[100][100],a1[100][100],tmp;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i==0||i==n-1||j==0||j==m-1){
				a1[i][j]=a[i][j];
			}
			else {
				tmp=a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j+1]+a[i][j-1];
				if(tmp%5>=3) a1[i][j]=tmp/5+1;
				else a1[i][j]=tmp/5;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a1[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
