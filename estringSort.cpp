#include<bits/stdc++.h>
using namespace std;

bool cmp(string s0,string s1){
	if(s0 < s1){
			s0==s1?return false:return true;
		return true;
	}
	return false;
}

int main() {
	string s[100];
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>s[i];
	}
	sort(s,s+t,cmp);
	for(int i=0;i<t;i++){
		cout<<s[i]<<endl;
	}
	return 0;
}
