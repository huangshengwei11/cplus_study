#include <iostream> 

using namespace std;
 
 
 
 int main() {
    int a,b,c;
	cin>>a>>b;
	while(a%b){
	c=b;
	b=a%b;
	a=c;
	}
	cout<<b<<endl; 
 	return 0;
	 	
 }
