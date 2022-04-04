#include <iostream> 

using namespace std;
 
 int main() {
 int a,n,c=1,m;
 int b[200];
 cin>>a;
 for(n=1;n<=a;n++){
 cin>>b[n];
 }
//for(m=20;m>=1;m--){
//cout<<b[m]<<endl;
//}
for(n=1;n<=a;n++){
if(b[n]>b[c]){
c=n;	
}	
}
cout<<c<<" "<<b[c]<<endl;	
	return 0;
	 	
 }
