#include<iostream>

using namespace std;

int main()
{
	int a[100][100],n,m,b[100][100];
	cin>>n>>m;
	for(int i=0; i<n; i++) {
		for(int j=0; j<m; j++) {
			cin>>a[i][j];
		}
	}
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			b[i][j]=a[n-1-j][i];
		}
	}
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
