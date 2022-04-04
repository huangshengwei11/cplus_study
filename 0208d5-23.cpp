#include <iostream>

using namespace std;

int main()
{
	int m,n,cnt=0;
	cin>>m;
	cin>>n;
	int a[n];
	for(int i=0;i<=n-1;i++){
		cin>>a[i];
	}
	int i;
	for(i=0;i<=n-1;i++){
		if(a[i]>m){
			cnt++;
		}
		else{
			m=m-a[i];
		}
	}
	cout<<cnt<<endl;
	
	return 0;
}

