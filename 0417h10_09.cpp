#include<iostream>

using namespace std;

int main()
{
	int a[10],b[10],c[10],m=0,n=0,t;
	for(int i=0;i<10;i++){
		cin>>a[i];
		if(a[i]%2==1){
			b[m]=a[i];
			m++;
		}
		else {
			c[n]=a[i];
			n++;
		}
	}
	for(int i=0;i<m-1;i++){
		for(int i=0;i<m-1;i++){
			if(b[i]<b[i+1]){
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
		}
	}
	for(int i=0;i<m;i++){
		cout<<b[i]<<" ";
	}
	for(int i=0;i<n-1;i++){
		for(int i=0;i<n-1;i++){
			if(c[i]>c[i+1]){
				t=c[i];
				c[i]=c[i+1];
				c[i+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<c[i]<<" ";
	}	
	return 0;
}
