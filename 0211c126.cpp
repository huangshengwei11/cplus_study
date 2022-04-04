#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int n;
	float a[100],b[100];
	float ans;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];
		ans=ans+a[i]/b[i];
	}
	printf("%.1f",ans);
	return 0;
}
