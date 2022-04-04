#include<iostream>

using namespace std;

int main()
{
	int m,n,a[5][9][9],ni,nj;
	int dx[8]={-1,-1,0,1,1, 1, 0,-1};
	int dy[8]={ 0, 1,1,1,0,-1,-1,-1};
	cin>>m>>n;
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			a[0][i][j]=0;
		}
	}
	a[0][4][4]=m;
	for(int k=1;k<=n;k++){
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				a[k][i][j]=2*a[k-1][i][j];
				for(int d=0;d<8;d++){
					ni=i+dx[d];
					nj=j+dy[d];
					if(ni>=0 && ni<9 && nj>=0 && nj<9){
						a[k][i][j]+=a[k-1][ni][nj];
					}
				}
			}
		}
	}
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			cout<<a[n][i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
