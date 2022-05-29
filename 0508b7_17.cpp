#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	int lena=a.length();
	int lenb=b.length();
	for(int i=0;i<lena;i++){
		if('A'<=a[i]&&a[i]<='Z'){
			a[i]=a[i]-'A'+'a';
		}
	}
	for(int i=0;i<lenb;i++){
		if('A'<=b[i]&&b[i]<='Z'){
			b[i]=b[i]-'A'+'a';
		}
	}
	int m=0,n=0;
	for(int i=0;i<lena;i++){
		if(a[i]!=' '){
			a[m]=a[i];
			m++;
		}
	}
	for(int i=0;i<lenb;i++){
		if(b[i]!=' '){
			b[n]=b[i];
			n++;
		}
	}
	//cout<<m<<a<<endl;
	//cout<<n<<b<<endl;
	if(m!=n){
		cout<<"N0"<<endl;
		return 0;
	}
	for(int i=0;i<m;i++){
		if(a[i]!=b[i]){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
