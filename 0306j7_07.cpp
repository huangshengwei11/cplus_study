#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n;
	cin>>n;
	for(int i=0;i<n.length();i++){
		if(n[i]=='A'){
			cout<<"T";
		}
		if(n[i]=='T'){
			cout<<"A";
		}
		if(n[i]=='C'){
			cout<<"G";
		}
		if(n[i]=='G'){
			cout<<"C";
		}
	}
	
	return 0;

}
