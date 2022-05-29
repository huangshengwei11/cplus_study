#include<iostream>
using namespace std;
struct STUDENT{
	string name,sex;
	int grade;
};
int main()
{
	STUDENT a[100],t;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].name>>a[i].grade>>a[i].sex;
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(a[j].grade>a[j+1].grade||a[j].grade==a[j+1].grade&&a[j].name>a[j+1].name){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i].name<<" "<<a[i].grade<<" "<<a[i].sex<<endl;
	}
	return 0;
}
