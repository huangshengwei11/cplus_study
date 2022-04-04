#include <iostream>

using namespace std;

int main()
{
	int n,m,cnt=0;
	bool a[5001];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		a[i]=true;
		for(int q=1;q<=m;q++){
			if(i%q==0){
				if(a[i]==true) a[i]=false;
				else a[i]=true;
			}
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]==false ){
			//cout<<i<<",";
			cnt++;
		}
	}
	for(int i=1;i<=n;i++){
		if(a[i]==false ){
			cout<<i;
			if(cnt>1){
				cout<<",";
				cnt--;
			}
			
		}
	}
	return 0;
}

