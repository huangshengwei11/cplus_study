#include <iostream> 

using namespace std;
 
 
 
 int main() {
 	int a,b,c,tmp;
 	cin>>a;
 	cin>>b;
 	cin>>c;
 	
 	if(a>b){
 		tmp=a;
 		a=b;
 		b=tmp;
 	}
 	
 	if(c<a){
 		cout<<a<<endl;
	} else {
		if(b<c){
			cout<<b<<endl;
		}else{
			cout<<c<<endl;
		}
	}
 	
 	
 	return 0;
	 	
 }
