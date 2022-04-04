#include<iostream>
#include<string>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	string s[100],s1[100];
	for(int i=0;i<n;i++){
		cin>>s[i];
		s1[i]=s[i];
		for(int j=0;j<m;j++){
			s1[i][j]='0';
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(s[i][j]=='?'){
				if(i>0 && s[i-1][j]=='*') s1[i][j]++; 
				if(i<n-1 && s[i+1][j]=='*') s1[i][j]++;
				if(j<m-1 && s[i][j+1]=='*') s1[i][j]++;
				if(j>0 && s[i][j-1]=='*') s1[i][j]++;
				if(i>0 && j>0 && s[i-1][j-1]=='*') s1[i][j]++;
				if(i<n-1 && j>0 && s[i+1][j-1]=='*') s1[i][j]++;
				if(i>0 && j<m-1 && s[i-1][j+1]=='*') s1[i][j]++;
				if(i<n-1 && j<m-1 && s[i+1][j+1]=='*') s1[i][j]++;	
			}
			else s1[i][j]='*';
		}
	}
	for(int i=0;i<n;i++){
		cout<<s1[i]<<endl;
	}
	return 0;
}
