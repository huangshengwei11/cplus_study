#include <iostream>

using namespace std;

int main()
{
	int a,n[32];
	cin>>a;
	for(int i=0;i<32;i++){
		n[31-i]=a&1;
		a=a>>1;
	}
	for(int i=0;i<32;i++){
		cout<<n[i];
		if(i%8==7) cout<<" ";
	}

	return 0;

}
