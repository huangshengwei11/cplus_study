#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ifstream cin ("zhihui.in");
	ofstream cout ("zhihui.out");
	string s;
	string t="zhihui";
	cin>>s;
	int count[7];
	for(int i=0;i<7;i++){
		count[i]=0;
	}
	for(int i=0;i<s.length();i++){
		if(s[i]=='z'){
			count[1]++;
		}
		if(s[i]=='h'){
			if(count[3]>count[4]){
				count[4]++;
			}
			else if(count[1]>count[2]){
				count[2]++;
			}
		}
		if(s[i]=='i'){
			if(count[5]>count[6]){
				count[6]++;
			}
			else if(count[2]>count[3]){
				count[3]++;
			}
		}
		if(s[i]=='u'&&count[4]>count[5]){
			count[5]++;
		}
	}
	cout<<count[6]<<endl;
	return 0;
}
