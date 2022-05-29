#include<iostream>

using namespace std;

int main()
{
	int n,a[20];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(i!=0&&a[i]<a[i-1]){
			cout<<"upset"<<endl;
			return 0;
		}
	}
	cout<<"happy"<<endl;
	return 0;
}
