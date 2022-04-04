#include <iostream> 

using namespace std;
 
 
 
 int main() {
 	int a,n=2;
 	int isPrime=1;
 	cin>>a;
 	while(n<a){
	 
 	if(a%n==0){
 	isPrime=0;
	 break;
	 }
	 else{
	n++;
	}
	}
	if (isPrime==0){
	cout<<a<<"is not prime"<<endl;
	}
	else {
	cout<<a<<"is prime"
	<<endl;
	}
 	return 0;
	 	
 }
