#include<iostream>
#include<string>
using namespace std;

int main(){
	string a;
	cin>>a;
	int ans=0,tmp=0;
	for(int i=0;i<11;i++){
		if(i!=1&&i!=5){
			tmp++;
			ans=ans+(a[i]-'0')*tmp;
		}
	}
	ans=ans%11;
	if(a[12]-'0'==ans||ans==10&&a[12]=='X') cout<<"Right"<<endl;
	else{
		for(int i=0;i<12;i++) cout<<a[i];
		if(ans!=10) cout<<ans<<endl;
		else cout<<"X"<<endl;	
	}
	return 0;
}
