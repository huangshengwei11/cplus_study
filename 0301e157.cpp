#include <iostream>

using namespace std;
int main()
{
	int n;
	char a=65,tmp;
	tmp=a;
	cin>>n;
	for(int i=0;i<n;i++){
		a=tmp+i;
		for(int q=0;q<n-i-1;q++){
			cout<<" ";
		}
		for(int j=0;j<=2*i-1;j++){
			cout<<a;
		}
		cout<<a<<endl;
	}
	return 0;

}
