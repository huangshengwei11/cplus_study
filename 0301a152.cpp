#include <iostream>

using namespace std;
int main()
{
	int n,m,ans;
	cin>>n>>m;
	ans=n;
	while(n>=m){
		ans++;
		n=n-m+1;
	}
	cout<<ans<<endl;
	return 0;

}
