#include <iostream> 

using namespace std;
  
int main() {	
	int w,s;
	int monthday[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	cin>>w;
	for(int i=1;i<=12;i++){
		s=w+12;
		for(int j=0;j<i;j++){
			s=s+monthday[j];
		}	
		if(s%7==5) cout<<i<<endl;	
}
	return 0;
	 	
 }
