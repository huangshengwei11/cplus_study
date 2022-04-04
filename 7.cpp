#include <iostream> 

using namespace std;
 
 
 
 int main() {
 	int n=0,total=0,score;
 	cin>>score;
 	while(score>0){
	total=total+score;
	n++;
	cout<<"debug"<<n<<" "<<total<<" "<<score<<endl;
	cin>>score;
	
	}
 	cout<<"average:"<<total*1.0/n<<endl;
 	return 0;
	 	
 }
