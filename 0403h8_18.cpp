#include<iostream>

using namespace std;

int main()
{
	int n,input,lx,ly,rx,ry;
	char a[1000][1000];
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>input;
			a[i][j]=(char)input;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]==0){
				lx=i+1;
				ly=j+1;
				goto jump;
			}
		}
	}
	jump:
	for(int i=n-1;i>=0;i--){
		for(int j=n-1;j>=0;j--){
			if(a[i][j]==0){
				rx=i-1;
				ry=j-1;
				goto jump2;
			}
		}
	}
	jump2:
	cout<<(rx-lx+1)*(ry-ly+1)<<endl;
	return 0;
}
