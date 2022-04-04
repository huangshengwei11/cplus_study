#include <iostream> 

using namespace std;
 
const int maxn=20;
 int main() {
 	int a[maxn]={0,1};
	 int i;
 	for(i=0;i<maxn-2;i++){
 	a[i+2]=a[i]+a[i+1];	
 	}
	for(i=maxn-1;i>=0;i--){
	cout<<a[i]<<" ";
	}
 	return 0;
	 	
 }
