#include<iostream>

using namespace std;

int main()
{
	int n,a[500],tmp,b[500],m=0;
	bool flag;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		flag=false;
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
				flag=true;
			}
		}
		if(flag==false) break;
	}
	for(int i=0;i<n;i++){
		if(a[i]%2==1){
			b[m]=a[i];
			m++;
		}
	}
	for(int i=0;i<m;i++){
		cout<<b[i];
		if(i!=m-1) cout<<",";
	}
	return 0;
}
