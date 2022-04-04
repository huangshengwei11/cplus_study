#include <iostream>

using namespace std;

int main()
{
 	int n;
	cin>>n;
	bool flag;
	for(int k=2;k<=n;k++){
		flag=true;
		for(int i=2;i*i<=k;i++){
			if (k%i==0){
				flag=false;
				break;
			}
		}
		if (flag==true) cout<<k<<endl;
	} 
 	
	return 0;
}
