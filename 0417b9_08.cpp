#include<iostream>

using namespace std;

int main(){
	int n,a[10000],max=0,cnt; 
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>a[max]){
			max=i;
		}
	}
	for(int i=0;i<=a[max];i++){
		cnt=0;
		for(int j=0;j<n;j++){
			if(i==a[j]){
				cnt++;
			}
		}
		cout<<cnt<<endl;
	}
	return 0;
}
