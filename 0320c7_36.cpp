#include<iostream>
#include<string>
using namespace std;

int main(){
	string a;
	getline(cin,a);
	int cnt=0;
	for(int i=0;i<a.length();i++){
		if(i!=0&&a[i]!=' '&&a[i-1]==' '||i==0&&a[i]!=' ') cnt++;  
	}
	cout<<cnt<<endl;
	return 0;
}
