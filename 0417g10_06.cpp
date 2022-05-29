#include<iostream>

using namespace std;

int main()
{
	int n,a[200],m=0,p[200],t;
	bool flag;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		flag=true;
		for(int j=2;j*j<=a[i];j++){
			if(a[i]%j==0) {
				flag=false;
				break;
			}
		}
		if(flag&&a[i]!=1){
			p[m]=a[i];
			m++;
		}
	}
	for(int i=0;i<m-1;i++){
		for(int j=0;j<m-1;j++){
			if(p[j]<p[j+1]){
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
	cout<<m<<endl;
	for(int i=0;i<m;i++){
		cout<<p[i]<<" ";
	}
	return 0;
}
