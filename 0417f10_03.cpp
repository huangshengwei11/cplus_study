#include<iostream>

using namespace std;

int main()
{
	int n,k,a[100],tmp;
	float t;
	float b[100];
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(b[j]<b[j+1]){
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
	}
	cout<<a[k-1]<<" "<<b[k-1];
	return 0;
}
