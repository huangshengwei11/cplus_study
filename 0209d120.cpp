#include <iostream> 

using namespace std;
 
int main() {
	int a,b,A=0,B=0,n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		if(a==0 && b==2 || a==2 && b==5 || a==5 && b==0) A++; 
		if(a==2 && b==0 || a==5 && b==2 || a==0 && b==5) B++;
	}
	cout<<A<<" "<<B<<endl;
	
	
	return 0;
	 	
 }
