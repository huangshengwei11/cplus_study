#include <iostream>

using namespace std;

int main()
{	
	int n,a[20000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i]==a[j]){
				a[i]=0;
			}
		}
		if(a[i]!=0){
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
