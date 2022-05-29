#include<iostream>
#include<iomanip>
using namespace std;
struct PERSON{
	string sex;
	double h;
};

int main()
{	
	int n;
	cin>>n;
	PERSON a[40],t;
	for(int i=0;i<n;i++){
		cin>>a[i].sex>>a[i].h;
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(a[j].sex<a[j+1].sex||a[j].sex=="male"&&a[j+1].sex=="male"&&a[j].h>a[j+1].h||
			a[j].sex=="female"&&a[j+1].sex=="female"&&a[j].h<a[j+1].h){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<fixed<<setprecision(2)<<a[i].h<<" ";
	}
	return 0;
}
