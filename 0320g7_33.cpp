#include<iostream>
#include<string>
using namespace std;

int main(){
	string s,s1;
	cin>>s;
	int len=s.length();
	for(int i=len-1;i>=0;i--){
		s1+=s[i];
	}
	if(s1==s) cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}
