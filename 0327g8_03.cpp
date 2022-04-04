#include<iostream>

using namespace std;

int main()
	{
	int a[100][100],m,n,ans=0;
	cin>>m>>n;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	} 
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(i==0||i==m-1||j==0||j==n-1){
				ans=ans+a[i][j];
			}
		}
	} 
	cout<<ans<<endl;
	return 0;
}
