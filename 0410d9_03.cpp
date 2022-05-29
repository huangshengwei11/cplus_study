#include <iostream>

using namespace std;

int main()
{
	int a[7],b[7],c[7],max=0;
	for(int i=0;i<7;i++){
		cin>>a[i]>>b[i];
		c[i]=a[i]+b[i];
	}
	for(int i=0;i<7;i++){
		if(c[i]>8){
			if(c[i]>c[max])
			max=i;
		}
	}
	if(max!=0){
		cout<<max+1<<endl;
	}
	else {
		cout<<"0"<<endl;
	}
	return 0;
}
