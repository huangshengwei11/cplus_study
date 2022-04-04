#include<iostream>
#include<string>
using namespace std;

int main(){
	int n,m,cnt,ni,nj;
	string s[100];
	int dx[8]={-1,-1,0,1,1,1,0,-1};
	int dy[8]={0,1,1,1,0,-1,-1,-1};
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>s[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j]=='*') cout<<"*";
			else{
				cnt=0;
				for(int d=0;d<8;d++){
					ni=i+dx[d];
					nj=j+dy[d];
					if(ni>=0 && ni<n && nj>=0 && nj<n && s[ni][nj]=='*') cnt++;
				}
				cout<<cnt;
			}
		}
		cout<<endl;
	}
	return 0;
}
