#include<iostream>
using namespace std;

int main()
{	
	int n,a[100000],cnt[101],max=0,maxi;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cnt[a[i]]++;
	}
	for(int i=100;i>=0;i--){
		if(cnt[i]>max) {
			max=cnt[i];
			maxi=i;
		}
	}
	cout<<maxi<<" "<<max<<endl;
	return 0;
}
