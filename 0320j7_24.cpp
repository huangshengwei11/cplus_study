#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int len=s.length(),start,end;
	for(int i=0;i<=len;i++){
		if(s[i]!=' '){
			if(i==0||s[i-1]==' '){
				start=i;
			}
			if(i==len-1||s[i+1]==' '){
				end=i;
				cout<<end-start+1;
				if(i!=len-1) cout<<",";
			}
		}
	}
	return 0;
}
