#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a[20],t1;
	int n,b[20],t2;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cin>>b[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(b[j]<b[j+1]||b[j]==b[j+1]&&a[j]>a[j+1]){
				t1=a[j];
				a[j]=a[j+1];
				a[j+1]=t1;
				t2=b[j];
				b[j]=b[j+1];
				b[j+1]=t2;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" "<<b[i]<<endl;
	}
	return 0;
}
