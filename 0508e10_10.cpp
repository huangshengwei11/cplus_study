#include<iostream>

using namespace std;

int main()
{
	int n,m,a[5000],b[5000],t,cnt=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
	}
	m=m*1.5;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(b[j]<b[j+1]||b[j]==b[j+1]&&a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				t=b[j];
				b[j]=b[j+1];
				b[j+1]=t;
			}
		}
	}
	cout<<b[m-1]<<" ";
	for(int i=0;i<n-1;i++){
		if(b[i]>=b[m-1]){
			cnt++;
		}
	}
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++){
		cout<<a[i]<<" "<<b[i]<<endl;
	}
	return 0;
}
