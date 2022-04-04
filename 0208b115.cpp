#include <iostream>

using namespace std;

int main()
{
 	int m,n;
 	cin>>m>>n;
 	bool flag;
 	for(int k=m;k<=n;k++){
 		for(int i=k;i>=2;i--){
 			if(k%i==0){
 				flag=true;
 				for(int q=2;q*q<=i;q++){
 					if(i%q==0){
 						flag=false;	
					}
				}
				if(flag==true && k==n){
					cout<<i<<endl;
					break;
				}
				if(flag==true && k!=n){
					cout<<i<<",";
					break;
				}
					
			}	
		}
	}
	return 0;
}
