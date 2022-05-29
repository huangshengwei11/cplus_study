#include<iostream>

using namespace std;

int main()
{
	int n,t;
	int a[300],b[300],c[300],s[300],x[300];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>c[i];
		s[i]=a[i]+b[i]+c[i];
		x[i]=i+1;
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(s[j]<s[j+1]||s[j]==s[j+1]&&a[j]<a[j+1]||s[j]==s[j+1]&&a[j]==a[j+1]&&x[j]>x[j+1]){
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<5;i++){
		cout<<x[i]<<" "<<s[i]<<endl;
	}
	return 0;
} 
