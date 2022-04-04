#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a;
	string s[100];
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>s[i];
	}
	for(int i=0;i<a;i++){
		if('a'<=s[i][0]&&s[i][0]<='z') s[i][0]=s[i][0]-'a'+'A';
		for(int j=1;j<s[i].length();j++){
			if('A'<=s[i][j]&&s[i][j]<='Z') s[i][j]=s[i][j]-'A'+'a';
		}
		cout<<s[i]<<endl;
	}
	
	return 0;

}
