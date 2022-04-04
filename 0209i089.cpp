#include <iostream>

using namespace std;

int main(){
	int a,b,tmp;
	cin>>a>>b;
	tmp=b-a;
	if(tmp>0 && tmp<=180 || tmp<0 && tmp>=-180){
		cout<<tmp<<endl;
	} 
	else if(tmp<0){
		cout<<360+tmp<<endl;
	}
	else if(tmp>=0){
		cout<<-360+tmp<<endl;
	}
	return 0;
}
