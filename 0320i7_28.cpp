#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int len=s.length(),start,end;
	for(int i=len;i>=0;i--){
		if(s[i]!=' '){
			if(i==len-1||s[i+1]==' '){
				end=i;
			}
			if(i==0||s[i-1]==' '){
				start=i;
				for(int j=start;j<=end;j++){
					cout<<s[j];
				}
			}
			
		}
		else cout<<" ";
	}
	return 0;
}
