#include <iostream>

using namespace std;

int main()
{	
	int m,a[10000],max=0,min=0;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>a[i];
		if(a[i]>a[max]){
			max=i;
		}
		if(a[i]<a[min]){
			min=i;
		}
	}
	cout<<a[max]-a[min]<<endl;
	return 0;
}
