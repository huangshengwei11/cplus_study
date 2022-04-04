#include <iostream>
#include <string>
using namespace std;

int main()
{
	char n;
	cin>>n;
	int a=n;
	if(65<=a&&a<=90){
		cout<<"uppercase "<<a-64<<endl;
	}
	else{
		cout<<"lowercase "<<a-96<<endl;
	}
	return 0;

}
