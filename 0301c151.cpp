#include <iostream>

using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(i%10==7 || i%7==0) cout<<"pass"<<endl;
		else cout<<i<<endl;
	}
}
