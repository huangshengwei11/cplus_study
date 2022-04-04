#include<iostream>

using namespace std;

int main(){
	int a[5][5],m,n,tmp;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
		}
	} 
	cin>>m>>n;
	m=m-1;
	n=n-1;
	for(int i=0;i<5;i++){
		if(i==m) tmp=n;
		else if(i==n) tmp=m;
		else tmp=i;
		for(int j=0;j<5;j++){
			cout<<a[tmp][j]<<" ";
			if(j==4) cout<<""<<endl;
		}
	}
	return 0;
}
