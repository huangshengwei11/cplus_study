#include <iostream>

using namespace std;

int main()
{
	int n,a=0,i=0;
	cin>>n;
	while(a<=n){
		i++;
		a=a+i;
	}
	a=a-i;
	i--;
	cout<<i*(i+1)*(2*i+1)/6+(i+1)*(n-a)<<endl;
	
	
	
	return 0;
}

