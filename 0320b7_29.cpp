#include<iostream>
#include<string>
using namespace std;

int main(){
	string a;
	string code= "0123456789X";
	cin>>a;
	int ans=0,tmp=0;
	for(int i=0;i<11;i++){
		if(i!=1&&i!=5){
			tmp++;
			ans=ans+(a[i]-'0')*tmp;
		}
	}
	ans=ans%11;
	if(a[12]==code[ans]) cout<<"Right"<<endl;
	else{
		for(int i=0;i<12;i++) cout<<a[i];
		cout<<code[ans]<<endl;	
	}
	return 0;
}
