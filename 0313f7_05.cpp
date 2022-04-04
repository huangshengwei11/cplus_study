#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n,m;
	getline(cin,n);
	m=n;
	for(int i=0;i<n.length();i++){
		if(i==n.length()-1){
			m[i]=n[i]+n[0];
		}
		else{
			m[i]=n[i]+n[i+1];
		}
	}
	cout<<m<<endl;
	
	return 0;

}
