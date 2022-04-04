#include <iostream>

using namespace std;

int main(){
	int n,shi,fen,miao;
	cin>>n;
	shi=n/3600;
	fen=(n%3600)/60;
	miao=n%60;
	cout<<shi<<":"<<fen<<":"<<miao<<endl;
		
	
	return 0;
}
