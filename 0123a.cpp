#include <iostream> 

using namespace std;
 int abc(){
 return 100;
 }
 int power(int x,int e){
int a=1,b;
for(b=1;b<=e;b++){
a=a*x;
}
 return a;
}
 int main() {
 int s;
 s=abc();
 cout<<s<<endl;
cout<<power(3,10)<<endl;	
cout<<power(5,4)<<endl;		
	return 0;
	 	
 }
 
