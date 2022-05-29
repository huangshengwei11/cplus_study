#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	fstream cin ("coor.in");
	ofstream cout ("coor.out");
	int a,b,c,d,n,xi[2000],yi[2000],x=0,y=0,x1,y1;
	cin>>a>>b>>c>>d>>n;
	for(int i=0;i<n+1;i++){
		cin>>xi[i]>>yi[i];
		x+=xi[i];
		y+=yi[i];
	}
	x1=c-a;
	y1=d-b;
	x=x-x1;
	y=y-y1;
	for(int i=0;i<n+1;i++){
		if(xi[i]==x&&yi[i]==y){
			cout<<i+1<<endl;
			break;
		}
	}
	return 0;
}
