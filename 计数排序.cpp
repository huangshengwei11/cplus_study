//输入n个0~100的整数进行排序 
//n<=100000 
#include<iostream>
using namespace std;

int main()
{	
	int n,a[100000],cnt[101],m=0;
	for(int i=0;i<=100;i++) cnt[i]=0;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<n;i++) cnt[a[i]]++;
	for(int i=0;i<=100;i++){
		for(int j=0;j<cnt[i];j++){
			a[m]=i;
			m++;
		}
	}
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}
