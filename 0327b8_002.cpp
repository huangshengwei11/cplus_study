#include<iostream>

using namespace std;

int main(){
	int a[10][10],n,m,r,ans=0;
	cin>>n>>m>>r;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	} 
	for(int i=0;i<m;i++){
		ans+=a[r-1][i];
	}
	cout<<ans<<endl;
	return 0;
}
