#include <iostream> 
#include <stdlib.h>
#include <time.h>

using namespace std;
 
 
 
int main() {
	srand(time(0));
	int result = rand() % 1000;
	int a;
	cin>>a;
//	cout << result << endl;
	
	while(a!=result){
    if(a>result){
    cout<<"its too big!"<<endl; 
	}
	else{
	cout<<"its too small!"<<endl;	
	}
	cin>>a;
	}
	cout<<"its correct!"<<endl;
 	return 0;
	 	
 }
