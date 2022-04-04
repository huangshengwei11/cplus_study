#include <iostream>

using namespace std;

int main()
{
	int n,a[3]={0,0,0},cnt=0;
	cin>>n;
	bool prime;
	for(int i=11;i<=n;i++){
		a[0]=i/100;
		a[1]=(i/10)%10;
		a[2]=i%10;
		if(i<100) {
			if(a[1]==a[2]){
				prime=true;
				for(int j=2;j*j<=i;j++){
					if(i%j==0) {
						prime=false;
						break;
					}
				}
				if(prime==true) cnt++;
			}
		}
		else {
			if(a[0]==a[2]){
				prime=true;
				for(int j=2;j*j<=i;j++){
					if(i%j==0) {
						prime=false;
						break;
					}
				}
				if(prime==true) cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;
}
