#include <iostream>

using namespace std;

int main()
{
	int n,m,k,h=0;
	int a[100],b[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(k=0;k<m;k++){
			if(i+1==a[k]){
				b[k]++;
			}
		}
	}
	
	for(int i=0;i<m;i++){
		if(b[i]>b[h] || i==0){
			h=i;
		}
	}
	cout<<h<<endl;
	
	
	return 0;
}

