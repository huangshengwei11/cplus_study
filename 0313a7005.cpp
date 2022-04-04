#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n,m;
	bool flag1=false,flag2=false;
	getline(cin,n);
	getline(cin,m);	
	for(int i=0;i<n.length();i++){
		if(n[i]=='6'){
			flag1=true;
			break;
		}
	}
	if(flag1){
		for(int i=0;i<m.length();i++){
			if(m[i]=='6'){
				flag2=true;
				break;
			}	
		}
		if(flag2) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	else cout<<"no"<<endl;
	return 0;

}
