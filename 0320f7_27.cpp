#include<iostream>
#include<string>
using namespace std;

int main(){
	string s;
	int start,end,len;
	getline(cin,s);
	len=s.length();
	for(int i=0;i<len;i++){
		if(s[i]!=' '){
			if(i==0||s[i-1]==' '){
				start=i;
			}
			if(i==len-1||s[i+1]==' '){
				end=i;
				for(int j=end;j>=start;j--){
					cout<<s[j];
				}
			}
		}
		else cout<<" ";
	}
	return 0;
}
