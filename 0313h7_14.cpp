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
		else if('A'<=n[i]&&n[i]<='Z'){
			n[i]=n[i]-'A'+'a';
		}
	}
	cout<<n<<endl;
	
	return 0;

}
