#include <iostream>

using namespace std;

int main()
{
 	int x,y,S,j;
 	cin>>S;
 	bool flag1,flag2;
 	for(x=1;x<=S/2;x++){
 		flag1=true;
 		flag2=true;
 		for(int i=2;i*i<=x;i++){
			if(x%i==0){
				flag1=false;
				break;
			}
		}	
		if(flag1==true){
			y=S-x;
			for(int i=2;i*i<=y;i++){
				if(y%i==0){
					flag2=false;
					break;
				}
			}
			if(flag2==true){
				j=x*y;
			}	
		}
	}
	cout<<j<<endl;
	
	return 0;
}
