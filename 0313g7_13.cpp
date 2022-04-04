#include <iostream>
#include <string>
using namespace std;

int main()
{
	string n;
	getline(cin,n);
	for(int i=0;i<n.length();i++){
		if('a'<=n[i]&&n[i]<='z'){
			n[i]=n[i]-'a'+'A';
		}
	}
	cout<<n<<endl;
	
	return 0;

}
