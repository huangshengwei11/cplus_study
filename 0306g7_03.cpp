#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a,b;
	int s=0;
	float x,tmp;
	cin>>x;
    cin>>a;
	cin>>b;
	for(int i=0;i<a.length();i++){
		if(a[i]==b[i]) s++;
	}
	tmp=(s+0.0)/a.length();
	if(tmp>=x) cout<<"yes"<<endl;
	else cout<<"no"<<endl;
	return 0;
}
