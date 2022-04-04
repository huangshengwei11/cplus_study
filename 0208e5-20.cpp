#include <iostream>

using namespace std;

int main()
{
	double h;
	cin>>h;
	double a=h+h+h/2+h/4+h/8+h/16+h/32+h/64+h/128+h/256,b=h/1024;
	cout<<a<<endl;
	cout<<b<<endl;
	return 0;
}

