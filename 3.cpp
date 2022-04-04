#include <iostream> 

using namespace std;
 
 
 
 int main() {
 	int n;
	cin>>n;
 	if(n%7==1){
	 cout<<(n-1)/7*12+2<<endl;
	 }
	 if(n%7==2){
	  cout<<(n-2)/7*12+4<<endl;
	 }
	 if(n%7==3){
		 cout<<(n-3)/7*12+6<<endl;
	 }
	 if(n%7==4){ cout<<(n-4)/7*12+8<<endl;
	 }
	 if(n%7==5){ cout<<(n-5)/7*12+10<<endl;
	 }
	 if(n%7==6) { cout<<(n-6)/7*12+11<<endl;
	
	 }
	 if(n%7==0){ cout<<n/7*12<<endl;
	 }
 	return 0;
	 	
 }
