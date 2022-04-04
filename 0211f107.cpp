#include <iostream>

using namespace std;

int main(){
	long long n,a[50],jinwei,tmp;
	cin>>n;
	a[49]=1;
	for(int i=0;i<49;i++){
		a[i]=0;
	}
	for(int i=0;i<n;i++){
		jinwei=0;
		for(int q=49;q>=0;q--){
			a[q]=a[q]+a[q]+jinwei;
			if(a[q]>=10) {
				jinwei=1;
				a[q]=a[q]%10;
			}
			else {
			jinwei=0;
			}
		}
		
	}
	for(int i=0;i<50;i++){
		if(a[i]!=0){
			tmp=i;
			break;
		}
	}
	for(int i=tmp;i<50;i++){
		cout<<a[i];
	}
	return 0;
}
