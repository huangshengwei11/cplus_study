#include<iostream>
using namespace std;

int main()
{	
	int n,m,a[500],t,sum=0,ans=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(sum+a[i]<=m){
			sum=sum+a[i];
			ans++;
		}
		else{
			cout<<ans<<endl;
			return 0;
		}
	}
	cout<<n<<endl;
	return 0;
}
