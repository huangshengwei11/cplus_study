#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	char a,b;
	cin>>s>>a>>b;
	for(int i=0;i<s.length();i++){
		if(s[i]==a) s[i]=s[i]-a+b;
	}
	cout<<s<<endl;
	return 0;

}
