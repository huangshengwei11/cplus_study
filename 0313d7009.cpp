#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n;
	int cnt1=0,cnt2=0;
	cin>>n;
	for(int i=0;i<n.length();i++){
		if('0'<=n[i]&&n[i]<='9') cnt2++;
		if('a'<=n[i]&&n[i]<='z'||'A'<=n[i]&&n[i]<='Z') cnt1++;
	}
	cout<<cnt1<<endl;
	cout<<cnt2<<endl;
	return 0;

}
