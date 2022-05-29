#include<iostream>
#include<string>

using namespace std;

int main()
{
	int n,age[100],t;
	string id[100],t1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>id[i]>>age[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(age[j]<60&&age[j+1]>=60||age[j]>=60&&age[j]<age[j+1]){
				t=age[j];
				age[j]=age[j+1];
				age[j+1]=t;
				t1=id[j];
				id[j]=id[j+1];
				id[j+1]=t1;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<id[i]<<endl;
	}
	return 0;
}
