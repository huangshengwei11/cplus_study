#include <iostream>

using namespace std;

int main()
{
	int n;
 	bool isprime[1000001];
 	cin>>n;
 	isprime[0]=false;
	isprime[1]=false;
	for(int i=2;i<=n;i++) isprime[i]=true;
	for(int i=2;i<=n;i++){
	
		if(isprime[i]){
			long long tmp=i;
			if(tmp*tmp>n) continue;
			for(int j=i*i;j<=n;j+=i){
				isprime[j]=false;
			}
		}
	}
	for(int i=0;i<=n;i++){
			if(isprime[i]) cout<<i<<endl;
	}
	return 0;
}

