#include <iostream>

using namespace std;

int main()
{
 	int n,x,y,e=0;
 	cin>>n;
 	bool flag1,flag2;
 	for(x=1;x<=n-2;x++){
 		flag1=true;
 		flag2=true;
 		for(int i=2;i*i<=x;i++){
			if(x%i==0){
				flag1=false;
				break;
			}
		}	
		if(flag1==true){
			y=x+2;
			for(int i=2;i*i<=y;i++){
				if(y%i==0){
					flag2=false;
					break;
				}
			}
			if(flag2==true && x!=1){
				cout<<x<<" "<<y<<endl;
			}	
		}
		if(flag1==false && flag2==false ){
			e++;
		}
	}
	if(n==1 || n==2 || n==3 || n==4) cout<<"empty"<<endl;
	return 0;
}
