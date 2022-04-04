#include<iostream>

using namespace std;

int main(){
	int a[5][5],max[5]={0,0,0,0,0},cnt=0;
	bool flag;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
		}
	} 
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(a[i][j]>=a[i][max[i]]){
				max[i]=j;
			} 
		}	
	}
	for(int i=0;i<5;i++){
		flag=true;
		for(int j=0;j<5;j++){
			if(a[i][max[i]]>a[j][max[i]]){
				cnt++;
				flag=false;
				break;
			}
		}
		if(flag) cout<<i+1<<" "<<max[i]+1<<" "<<a[i][max[i]]<<endl;
	}
	if(cnt==5){
		cout<<"not found"<<endl;
	}
	return 0;
}
