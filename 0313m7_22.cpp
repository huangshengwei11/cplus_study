#include<iostream>
#include<string>
using namespace std;
int main()
{
	string email,u[10000],p[10000],e[10000];
	int n,cnt=0;
	cin>>email>>n;
	for(int i=0;i<n;i++){
		cin>>u[i]>>p[i]>>e[i];
	}
	for(int i=0;i<n;i++){
		if(e[i]==email){
			cout<<u[i]<<" ";
			for(int j=0;j<p[i].length();j++){
				if('a'<=p[i][j]&&p[i][j]<='z') p[i][j]=p[i][j]-'a'+'A';
				else if('A'<=p[i][j]&&p[i][j]<='Z') p[i][j]=p[i][j]-'A'+'a';
			}
			cout<<p[i]<<endl;
		}
		else cnt++;
	}
	if(cnt==n) cout<<"empty"<<endl;
	return 0;
} 
