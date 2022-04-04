#include <iostream>

using namespace std;

int main(){
	int a[101],sg[102],n,b,c,max=0;
	cin>>n;
	for(int i=0;i<=101;i++){
		sg[i]=0;
	}
	sg[101] = 1;
	
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sg[a[i]]=1;
	}
	
	for(int i=1;i<=n;i++){
		b=0;
		c=0;
		sg[a[i]]=0;
		for(int j=1;j<=101;j++){
			if(sg[j]==0){
				b++;
			}
			else{
				c=b>c?b:c;
				b=0;
			}
		}
		max=c>max?c:max;
		sg[a[i]]=1;
	}
	cout<<max<<endl;
	return 0;
}
