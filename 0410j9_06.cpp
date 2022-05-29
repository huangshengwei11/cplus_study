#include <iostream>
#include <string>
using namespace std;

int main()
{	
	string n;
	cin>>n;
	int len=n.length(),max=0,min=0,l[100],a;
	for(int i=0;i<len;i++){
		l[i]=0;
		for(int j=0;j<len;j++){
			if(n[j]==n[i]&&i!=j){
				l[i]++;
			}
		}
	}
	for(int i=0;i<len;i++){
		if(l[i]>l[max]) max=i;
		if(l[i]<l[min]) min=i;
	}
	a=l[max]-l[min];
	if(a==1||a==0){
		cout<<"No Answer"<<endl;
		cout<<"0"<<endl;
		return 0;
	}
	for(int i=2;i*i<=a;i++){
			if(a%i==0){
				cout<<"No Answer"<<endl;
				cout<<"0"<<endl;
				return 0;
			}
	}
	
	cout<<"Lucky Word"<<endl;
	cout<<a<<endl;
	return 0;
}
