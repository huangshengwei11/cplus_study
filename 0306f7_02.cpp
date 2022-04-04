#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	bool flag;
	cin>>s;
	for(int i=0;i<s.length();i++){
		flag=true;
		for(int j=0;j<s.length();j++){
			if(s[j]==s[i]&&j!=i){
				flag=false;
				break;
			}
		}
		if(flag==true) {
			cout<<s[i]<<endl;
			break;
		}
	}
	if(flag==false) cout<<"no"<<endl;	
	return 0;
}
