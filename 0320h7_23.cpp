#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int kong[200];
	for(int i=0;i<200;i++) kong[i]=-1;
	int len=s.length();
	for(int i=0;i<len;i++){
		if(s[i]==' '){
			if(s[i-1]==' '){
				kong[i]=i;
			}
		}
	}
	for(int i=0;i<len;i++){
		if(kong[i]!=i) cout<<s[i];
	}
	return 0;
}
