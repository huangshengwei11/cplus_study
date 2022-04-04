#include <iostream>

using namespace std;

int main(){
	int A,B,n,a[100],b[100];
	cin>>A>>B>>n;
	for(int i=0;i<A;i++){
		cin>>a[i];
	}
	for(int i=0;i<B;i++){
		cin>>b[i];
	}
	if(n%A==0 && n%B==0){
		cout<<a[A-1]<<" "<<b[B-1]<<endl;
	}
	if(n%A==0 && n%B!=0){
		cout<<a[A-1]<<" "<<b[n%B-1]<<endl;
	}
	if(n%A!=0 && n%B==0){
		cout<<a[n%A-1]<<" "<<b[B-1]<<endl;
	}
	if(n%A!=0 && n%B!=0){
		cout<<a[n%A-1]<<" "<<b[n%B-1]<<endl;
	}
	return 0;
}
