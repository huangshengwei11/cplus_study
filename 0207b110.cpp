#include <iostream>

using namespace std;

int main()
{
	int n,cnt=0,i;
	cin>>n;
	bool flag;
	for(i=2;;i++){
		flag=true;
		for(int q=2;q*q<=i;q++){
			if(i%q==0){
				flag=false;
				break;
			} 
		}
		if(flag==true) cnt++;	
		if(cnt==n) break;	
	}
	cout<<i<<endl;	
	
	
	return 0;
}
