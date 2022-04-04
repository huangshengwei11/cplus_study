#include <iostream>

using namespace std;

int main(){
	int a,b,i1,i2,i3,i4,di,cnt=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		i1=i/1000;
		i2=(i-i1*1000)/100;
		i3=(i-i1*1000-i2*100)/10;
		i4=i%10;
		di=1000*i4+100*i3+10*i2+i1;
		if(di-i>=1000){
			cnt++;
		}
	}	
	cout<<cnt<<endl;
	return 0;
}
