#include <iostream> 

using namespace std;
 
 
 
 int main() {
 	int a,b,c;
 	cin>>a;
 	for(b=2;b<=a;b++){
 		c=2;
		while(b%c!=0 && c<=b-1){
	
			c++;
	
	
	
		}
		if (c>b-1) cout<<b<<endl;	
    }
 	return 0;
	 	
 }
