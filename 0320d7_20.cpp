#include<iostream>
#include<string>
using namespace std;

int main(){
	string a;
	cin>>a;
	int len=a.length();
	if(a[len-1]=='r'&&a[len-2]=='e'||a[len-1]=='y'&&a[len-2]=='l') {
		a[len-1]=' ';
		a[len-2]=' ';
	}
	else if(a[len-1]=='g'&&a[len-2]=='n'&&a[len-3]=='i'){
		a[len-1]=' ';
		a[len-2]=' ';
		a[len-3]=' ';
	}
	cout<<a<<endl;
	return 0;
}
