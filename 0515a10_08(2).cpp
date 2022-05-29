#include<iostream>
using namespace std;
struct STUDENT {
	int chi,math,eng,score,num;
};
int main()
{
	int n;
	STUDENT s[300],t;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i].chi>>s[i].math>>s[i].eng;
		s[i].score=s[i].chi+s[i].math+s[i].eng;
		s[i].num=i+1;
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(s[j].score<s[j+1].score||s[j].score==s[j+1].score&&s[j].chi<s[j+1].chi||
			s[j].score==s[j+1].score&&s[j].chi==s[j+1].chi&&s[j].num>s[j+1].num){
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
			}
		}
	}
	for(int i=0;i<5;i++){
		cout<<s[i].num<<" "<<s[i].score<<endl;
	}
	return 0;
}
