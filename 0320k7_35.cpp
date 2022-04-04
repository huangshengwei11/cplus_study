#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s,result;
	char a,b;
	int p1,p2,p3,len;
	cin>>p1>>p2>>p3>>s;
	len=s.length();
	for(int i=0; i<len; i++) {
		if(s[i]=='-'&&i!=0&&i!=len-1) {
			a=s[i-1];
			b=s[i+1];
			if('a'<=a&&'a'<=b||a<='9'&&b<='9') {

				if(a>=b) result+='-';
				else if(b-a>1) {
					if(p3==1) {
						for(int j=0; j<b-a-1; j++) {
							for(int k=0; k<p2; k++) {
								if(p1==1) { // lowercase
									result+=a+j+1;
								}
								if(p1==2) { // uppercase
									if(a>='a') a=a-'a'+'A';
									result+=a+j+1;
								}
								if(p1==3) { // *
									result+='*';
								}
							}
						}
					}
					if(p3==2) {
						for(int j=b-a-2; j>=0; j--) {
							for(int k=0; k<p2; k++) {
								if(p1==1) { // lowercase
									result+=a+j+1;
								}
								if(p1==2) { // uppercase
									if(a>='a') a=a-'a'+'A';
									result+=a+j+1;
								}
								if(p1==3) { // *
									result+='*';
								}
							}
						}
					}
				}
			}
			else result+='-';
		} 
		else result+=s[i];
	}
	cout<<result<<endl;
	return 0;
}
