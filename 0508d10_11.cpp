#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	string a[40],t;
	double h[40],t1;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>h[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(a[j]<a[j+1]||a[j]=="male"&&a[j+1]=="male"&&h[j]>h[j+1]||
				a[j]=="female"&&a[j+1]=="female"&&h[j]<h[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				t1=h[j];
				h[j]=h[j+1];
				h[j+1]=t1;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<fixed<<setprecision(2)<<h[i]<<" ";
	}
	return 0;
}
