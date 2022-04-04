#include <iostream>

using namespace std;

int main(){
	int t,a,p;
	cin>>t>>a>>p;
	if(a*p<=t){
		cout<<a*p-a+1<<" "<<a*p<<endl;
	}
	else{
		cout<<t-(t-a*(p-1))+1<<" "<<t<<endl;
	}
	return 0;
}
