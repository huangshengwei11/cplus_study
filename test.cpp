#include<iostream>

using namespace std;

int main()
{
	int n,ans=0;
	for(int a=1;a<10;a++){
		for(int b=0;b<10;b++){
			for(int c=0;c<10;c++){
				for(int d=0;d<10;d++){
					n=a*10000000+b*1000000+2018*100+c*10+d;
					if(n%12==0) {
						ans++;
						cout<<n<<endl;
					}
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}
