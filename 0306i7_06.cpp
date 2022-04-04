#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n;
	cin>>n;
	bool flag;
	for(int i=0;i<n.length();i++){
		flag=true;
		if('a'<=n[i]&&n[i]<='z'||'A'<=n[i]&&n[i]<='Z'||'0'<=n[i]&&n[i]<='9'||n[i]=='_'){
		}
		else{
			flag=false;
			break;
		}
	}
	if('0'<=n[0]&&n[0]<='9'){
		flag=false;
	}
	if(flag){
		cout<<"yes"<<endl;
	}
	else {
		cout<<"no"<<endl;
	}


	return 0;

}
