#include<iostream>
using namespace std;
struct STUDENT{
	string name;
	int score;
};

int main()
{	
	int n;
	cin>>n;
	STUDENT a[20],t;
	for(int i=0;i<n;i++){
		cin>>a[i].name>>a[i].score;
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(a[j].score<a[j+1].score||a[j].score==a[j+1].score&&a[j].name>a[j+1].name){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i].name<<" "<<a[i].score<<endl;
	}
	return 0;
}
