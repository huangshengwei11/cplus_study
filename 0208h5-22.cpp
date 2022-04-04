#include <iostream>

using namespace std;

int main()
{
	int n[12],a=0,b=0,tmp;
	for(int i=0;i<12;i++){
		cin>>n[i];
	}
	for(int i=0;i<12;i++){
		a = a+ 300 - n[i];
		if (a<0) {
			cout << -(i+1) << endl;
			break;
		}
		b = b + a /100 * 100;
		a = a % 100;
	}
	if (a >= 0) {
		cout<<a+b*6/5<<endl;
	}
	
	
	return 0;
}

