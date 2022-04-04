#include <iostream>

using namespace std;
int main()
{
	int a,b,c,tmp=0;
	cin>>a>>b>>c;
	if(a>=b && a>=c) cout<<a-b+a-c<<endl;
	else if(b>=a && b>=c) cout<<b-a+b-c<<endl;
	else if(c>=a && c>=b) cout<<c-a+c-b<<endl;
	return 0;
}
