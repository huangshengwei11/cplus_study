#include <iostream>

using namespace std;

int main()
{
 	int n,m,t,x,y,nx,ny,ans;
 	char l;
 	int dx[8]={2, 1,-1,-2,-2,-1, 1, 2};
	int dy[8]={1, 2, 2, 1,-1,-2,-2,-1};
	cin>>n>>m>>t;
	while(t--){
		ans=0;
		cin>>l>>x;
		y=l-'A'+1;
		for(int d=0;d<8;d++){
			nx=x+dx[d];
			ny=y+dy[d];
			if(nx>=1&&nx<=m&&ny>=1&&ny<=n) ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
