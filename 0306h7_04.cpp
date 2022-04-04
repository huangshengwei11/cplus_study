#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	string a[100],b[100];
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a[i]>>b[i];
	}
	for(int i=0; i<n; i++) {
		if(a[i]==b[i]) {
			cout<<"Tie"<<endl;
		} else if( 	 a[i]=="Rock"&&b[i]=="Scissors"
		             || a[i]=="Scissors"&&b[i]=="Paper"
		             || a[i]=="Paper"&&b[i]=="Rock") {
			cout<<"Player1"<<endl;
		} else {
			cout<<"Player2"<<endl;
		}
	}


	return 0;

}
