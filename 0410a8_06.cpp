#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
 	int m,n,a[100][100],b[100][100],cnt=0;
 	cin>>m>>n;
 	for(int i=0;i<m;i++){
 		for(int j=0;j<n;j++){
 			cin>>a[i][j];	
		}
	}
	for(int i=0;i<m;i++){
 		for(int j=0;j<n;j++){
 			cin>>b[i][j];
			if(b[i][j]==a[i][j]){
				cnt++;
			}
		}
	}
	cout<<fixed<<setprecision(2)<<cnt*100.0/n/m<<endl;
	return 0;
}
