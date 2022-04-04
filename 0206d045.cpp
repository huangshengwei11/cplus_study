#include <iostream>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int x[1000],y[1000];

	for(int i=0;i<n;i++){
		cin>>x[i]>>y[i];
			}
	for(int i=0;i<n;i++){
		if (m<x[i]){
			if(i==0){
				cout<<0<<endl;
				cout<<x[0]-m<<" "<<y[i];
			}
			else{
				cout<<y[i-1]<<endl;
				cout<<x[i]-m<<" "<<y[i];
			}
			break;
		}	
				
	}
			
	
	return 0;
}
