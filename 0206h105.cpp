#include <iostream>

using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cout<<"+";
		for(int i=0;i<k;i++){
			cout<<"-";
		}	
	}
	cout<<"+"<<endl;
	return 0;
}
