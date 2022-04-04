#include<iostream>

using namespace std;

int main(){
	int n,a,b;
	cin>>n>>a>>b;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i==a){
				cout<<"("<<i<<","<<j<<") ";
			}
		}
	}
	cout<<""<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j==b){
				cout<<"("<<i<<","<<j<<") ";
			}
		}
	}
	cout<<""<<endl;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j-i==b-a){
				cout<<"("<<i<<","<<j<<") ";
			}
		}
	}
	cout<<""<<endl;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=n;j++){
			if(j+i==b+a){
				cout<<"("<<i<<","<<j<<") ";
			}
		}
	}
	return 0;
}
