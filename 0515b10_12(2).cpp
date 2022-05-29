#include<iostream>
using namespace std;
struct PAT {
	string id;
	int age;
};
int main()
{
	int n;
	PAT p[100],t;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p[i].id>>p[i].age;
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(p[j].age<60&&p[j+1].age>=60||p[j].age>=60&&p[j].age<p[j+1].age){
				t=p[j];
				p[j]=p[j+1];
				p[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<p[i].id<<endl;
	}
	return 0;
}
