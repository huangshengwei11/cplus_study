#include <iostream>

using namespace std;

int main(){
	int n,m,cnt=0,s=1;
		cin>>n;
		m=n;
	while(n>1){
		n=n/2;
		cnt++;	
	}
	for(int i=0;i<cnt;i++) s=s*2;
	cout<<(m-s)*2+1<<endl;
	return 0;
}

