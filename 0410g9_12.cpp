#include <iostream>
#include <string>
using namespace std;

int main()
{	
	int n,a[1000],len[1000],max=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=1;;j++){
			if(i+j<n && a[i+j]!=a[i] || i+j>=n){
				len[i]=j;
				break;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(len[i]>len[max]){
			max=i;
		}
	}
	cout<<len[max];
	return 0;
}
