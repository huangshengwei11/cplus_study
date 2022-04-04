#include <iostream>

using namespace std;
int main()
{
	int a,n,s=0,p=1;
	cin>>a>>n;
	s=s+a;
	for(int i=1;i<n;i++){
		p=p*10+1;
		s=s+a*p;
	}
	cout<<s<<endl;
}
