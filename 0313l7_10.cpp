#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if('A'<=s[i]&&s[i]<='E'){
			s[i]=s[i]+21;
		}
		else if('F'<=s[i]&&s[i]<='Z'){
			s[i]=s[i]-5;
		}
	}
	cout<<s<<endl;
	return 0;

}
