#include<iostream>
#include<string>
using namespace std;

int main(){
	string s,w0,w1;
	getline(cin,s);
	int start,end,len=s.length();
	w0="";
	w1=s;
	for(int i=0;i<len;i++){
		if(s[i]!=' '&&s[i]!=','){
			if(i==0||s[i-1]==' '||s[i-1]==','){
				start=i;
			}
			if(i==len-1||s[i+1]==' '||s[i+1]==','){
				end=i;
				if(end-start+1>w0.length()){
					w0="";
					for(int j=start;j<=end;j++) w0=w0+s[j];
				}
				if(end-start+1<w1.length()){
					w1="";
					for(int j=start;j<=end;j++) w1=w1+s[j];
				}
			}
		}
	}
	cout<<w0<<endl;
	cout<<w1<<endl;
	return 0;
}
