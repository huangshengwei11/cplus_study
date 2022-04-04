#include <iostream> 

using namespace std;
 
 
const int maxn=100; 
 int main() {
 	int a[2]={0,0};
 	int b[maxn];
 	int i;
 	for(i=0;i<maxn;i++){
 	b[i]=2*i+1;	
 	cout<<i<<":\t"<<b[i]<<endl;	
	 }
	
	
	return 0;
	 	
 } 
