#include <iostream> 

using namespace std;
 
 

int fib(int n){
	if (n<=2) {
		return n-1;
	} else {
		return fib(n-2) + fib(n-1);
	}
}

 int main() { 
 	for(int i=1; i<=20; i++) {
 		cout << i << ":" << fib(i) << endl;
	 }
	
//cout<<fib(10)<<endl;	
	return 0;
	 	
 }
