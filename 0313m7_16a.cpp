#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a,b;
	getline(cin,a);
	getline(cin,b);
	int lena=a.length(),lenb=b.length(),len;
	for(int i=0;i<lena;i++){
		if('A'<=a[i]&&a[i]<='Z') a[i]=a[i]-'A'+'a';
	}
	for(int i=0;i<lenb;i++){
		if('A'<=b[i]&&b[i]<='Z') b[i]=b[i]-'A'+'a';
	}
	if(lena<=lenb) len=lena;
	else len=lenb;
	for(int i=0;i<len;i++){
		if(a[i]>b[i]){
			cout<<">"<<endl;
			break;
		}
		if(a[i]<b[i]){
			cout<<"<"<<endl;
			break;
		}
		if(i==len-1&&a[i]==b[i]){
			if(lena>lenb) cout<<">"<<endl;
			else if(lena<lenb) cout<<"<"<<endl;
			else cout<<"="<<endl;
			break;
		}
	}
	return 0;
} 
