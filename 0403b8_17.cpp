#include<iostream>
#include<string>
using namespace std;
int main()
{
	int r,c,ans=0;
	string s[100];
	cin>>r>>c;
	for(int i=0; i<r; i++) {
		cin>>s[i];
	}
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			if(s[i][j]=='#') {
				if(i==0||s[i-1][j]!='#') {
					if(j==0||s[i][j-1]!='#') {
						ans++;
					}
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
