#include<iostream>

using namespace std;

int main()
{
	int t;
	int a[50000],b[50000];
	cin>>t;
	bool flag;
	int max;
	for(int i=0;i<t;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<t;i++){
		flag=false;
		for(int j=1;a[i]*j<=b[i];j++){
			if(j<=a[i]) max=a[i];
			else max=j;
			for(int k=max;k>=1;k--){
				if(a[i]%k==0&&j%k==0){
					if(a[i]*k*j==b[i]){
						cout<<j<<endl;
						flag=true;
					}
					break;
				}
			}
			if(flag) {
				break;
			}
		}
		if(flag==false) {
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
