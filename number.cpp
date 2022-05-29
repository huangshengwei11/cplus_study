#include<iostream>
#include<fstream>
 
using namespace std;

int main()
{
	ifstream cin ("number.in");
	ofstream cout ("number.out");
	int l,r,t,ans=0;
	bool flag;
	cin>>l>>r;
	if(l>r){
		t=l;
		l=r;
		r=t;
	}
	for(int i=l;i<=r;i++){
		if(i%7==0){
			flag=false;
			for(int j=1;j<=i;j=j*10){
				if(i/j%10==7){
					flag=true;
					break;
				}
			}
			if(flag){
				ans++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
