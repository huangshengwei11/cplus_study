#include <iostream> 

using namespace std;
 
int a() {
 	int a;
 	cin>>a;
 	for(;;){
 		if(a%2==1){
			break;
		}
		else{
			a=a/2;
		}
	 }
 	cout<<a<<endl;

 	return 0;
	 	
 } 
 
 int main() {
 	int a;
 	cin>>a;
 	while(1){
 		if(a%2==1){
			break;
		}
		else{
			a=a/2;
		}
	 }
 	cout<<a<<endl;

 	return 0;
	 	
 }
