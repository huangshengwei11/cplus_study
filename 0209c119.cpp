#include <iostream> 

using namespace std;
 
int main() {
	int a,b;
	cin>>a>>b;
	if(a==0 && b==2 || a==2 && b==5 || a==5 && b==0) cout<<"1"<<endl;
	if(a==2 && b==0 || a==5 && b==2 || a==0 && b==5) cout<<"2"<<endl;
	if(a==0 && b==0 || a==2 && b==2 || a==5 && b==5) cout<<"0"<<endl;
	
	return 0;
	 	
 }
