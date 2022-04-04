#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
	char input[200];
	int a[200],b[200],ans[201];
	for(int i=0; i<200; i++) {
		a[i]=0;
		b[i]=0;
		ans[i]=0;
	}
	ans[200]=0; 
	
	cin>>input;
	for(int i=0; i<strlen(input); i++) {
		a[i]=input[strlen(input)-i-1] - 48;
	}

	cin>>input;
	for(int i=0; i<strlen(input); i++) {
		b[i]=input[strlen(input)-i-1] - 48;
	}
	
	for(int i=0;i<200;i++){
		ans[i]=ans[i]+a[i]+b[i];
		if(ans[i]>=10){
			ans[i]-=10;
			ans[i+1]=1;
		}
	}
	int pos;
	for(int i=200;i>=0;i--){
		if(ans[i]!=0) {
		pos=i;
		break;
		}
	}
	for(int i=pos;i>=0;i--){
		cout<<ans[i];
	}
	return 0;
}
