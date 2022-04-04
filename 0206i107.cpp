#include <iostream>

using namespace std;

int main()
{
	long long n=1,s=1;
	
	for(int i=0;i<100;i++){
		s=s*2;
		cout<<n<<":"<<s<<endl;
		n++;
	}
	
	return 0;
}
