#include<iostream>

using namespace std;

int main()
{
	int n,s=0,c=0,a[100][100];
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
			if(a[i][j]<=50){
				s++;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i][j]<=50){
				if(i<n-1&&a[i+1][j]>50||i>0&&a[i-1][j]>50||
				j<n-1&&a[i][j+1]>50||j>0&&a[i][j-1]>50||i==n-1||i==0||j==n-1||j==0){
					c++;
				}
			}
		}
	}
	cout<<s<<" "<<c<<endl;
	
	return 0;
}
