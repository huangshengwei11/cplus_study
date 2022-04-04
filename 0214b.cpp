#include <iostream>

using namespace std;

int main()
{
	int n,i,tmp;
	cin>>n;
	tmp=n;
	for(i=1;i<=9;i++){
		if(n<10) break;
		n=n/10; 
	}
	cout<<tmp<<":"<<i<<endl;
	return 0;
}
