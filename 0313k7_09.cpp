#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if('a'<=s[i]&&s[i]<='y'||'A'<=s[i]&&s[i]<='Y'){
			s[i]=s[i]+1;
		}
		else if(s[i]=='z'){
			s[i]='a';
		}
		else if(s[i]=='Z'){
			s[i]='A';
		}
	}
	cout<<s<<endl;
	return 0;

}
