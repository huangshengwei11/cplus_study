#include <iostream>

using namespace std;

int main()
{
	int x,y,tmp,cnt=0;
	bool flag;
	cin>>x>>y;
	if(x>y){
		tmp=x;
		x=y;
		y=tmp;
	}
	for(int k=x;k<=y;k++){
		flag=true;
		for(int i=2;i*i<=k;i++){
			if(k%i==0){
				flag=false;
				break;
			}
		}
		if(k!=1 && flag==true) cnt++;
	}	
	cout<<cnt<<endl;
	return 0;
}
