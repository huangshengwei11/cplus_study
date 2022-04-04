#include <iostream>

using namespace std;

int main()
{
 	int n,cnt,i;
 	cin>>n;
	for(i=2;i<=n;i++){
		cnt=0;
		if (n%i==0){
			cout<<i<<" ";
			while(n%i==0){
				n=n/i;
				cnt++;
			}
			cout<<cnt<<endl;
			
		}
	}
	
	
	return 0;
}
