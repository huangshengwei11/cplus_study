#include<iostream>
#include<string> 
using namespace std;

int main()
{
	string n,t,word[100];
	int start,end;
	int m=0;
	getline(cin,n);
	int len=n.length();
	for(int i=0;i<len;i++){
		if(i==0&&n[i]!=' '||i>0&&n[i]!=' '&&n[i-1]==' '){
			start=i;
		}
		if(i==len-1&&n[i]!=' '||i<len-1&&n[i]!=' '&&n[i+1]==' '){
			end=i;
			for(int j=start;j<=end;j++){
				word[m]+=n[j];
			}
			m++;
		}
	}
	for(int i=0;i<m-1;i++){
		for(int j=0;j<m-1;j++){
			if(word[j]>word[j+1]){
				t=word[j];
				word[j]=word[j+1];
				word[j+1]=t;
			}
		}
	}
	for(int i=0;i<=m-1;i++){
		if(i==0||word[i]!=word[i-1]){
			cout<<word[i]<<endl;
		}
	}
	return 0;
}
