#include <iostream>

using namespace std;

int main()
{
int n[12],a=0,b=0,tmp;
	for(int i=0;i<12;i++){
		cin>>n[i];
	}
	for(int i=0;i<12;i++){
		tmp=a;
		a=(300+a-n[i])%100;
		b=b+(300+tmp-n[i])/100*100;
		if(a<0){
		cout<<-(i+1)<<endl;
		break;
		}
		if(i==11){
		cout<<a+b*6/5<<endl;
		}
	}
	return 0;
}

