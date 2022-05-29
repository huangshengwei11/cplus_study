#include <iostream>
#include <string>
using namespace std;

int main()
{	
	int k,len;
	cin>>k;
	string s;
	cin>>s;
	len=s.length();
	bool flag;
	for(int i=0;i<=len-k;i++){
		flag=true;
		for(int j=1;j<=k-1;j++){
			if(s[i+j]!=s[i]){
				flag=false;
				break;
			}
		}
		if(flag==true){
			cout<<s[i]<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;
	return 0;
}
