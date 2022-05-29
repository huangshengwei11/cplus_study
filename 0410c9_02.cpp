#include <iostream>
#include <string>
using namespace std;

int main()
{
 	int n,a[100],max=0;
 	string b[100];
 	cin>>n;
 	for(int i=0;i<n;i++){
 		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>=a[max]){
			max=i;
		}
	}
	cout<<b[max]<<endl;
	return 0;
}
