#include <iostream> 

using namespace std;
  
int main() {	
	int monthday[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	bool leap;
	int y,m,d,ey,em,ed,day,cnt=0;
	cin>>y>>m>>d>>ey>>em>>ed;
	while(ey!=y || em!=m || ed!=d){
	leap=y%4==0 && y%100!=0 || y%400==0;
		day=monthday[m];
	
		if(leap && m==2) day++;
		d++;
		if(d>day) {
			m++;
			d=1;	
		}
		if(m==13){
			y++;
			m=1;
			d=1;
		}
		cnt++;
	}
	cout<<cnt<<endl;
	return 0;
	 	
 }
