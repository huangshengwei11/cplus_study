#include <iostream>
#include <string>
using namespace std;

int main()
{	
	int n;
	cin>>n;
	string a[100];
	int b[100],c[100],f[100],money[100],max=0,sum=0;
	char d[100],e[100];
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>c[i]>>d[i]>>e[i]>>f[i];
		money[i]=0;
	}
	for(int i=0;i<n;i++){
		if(b[i]>80 && f[i]>=1) money[i]+=8000;
		if(b[i]>85 && c[i]>80) money[i]+=4000;
		if(b[i]>90) money[i]+=2000;
		if(b[i]>85 && e[i]=='Y') money[i]+=1000;
		if(c[i]>80 && d[i]=='Y') money[i]+=850;
	}
	for(int i=0;i<n;i++){
		if(money[i]>money[max]){
			max=i;
		}
		sum=sum+money[i];
	}
	cout<<a[max]<<endl;
	cout<<money[max]<<endl;
	cout<<sum<<endl;
	return 0;
}
