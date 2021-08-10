#include<bits/stdc++.h>
using namespace std;
/*
bool cmp(string s0,string s1){
	if(s0 < s1){
			s0==s1?return false:return true;
		return true;
	}
	return false;
}
*/
int cmp(string s1, string s2) {

        int i = 0;      

        while (i < s1.length() && i < s2.length()) {

            if (s1[i] > s2[i]) {

                return 1;
            } else if (s1[i] < s2[i]) {
                return -1;
            }
            i++;

        }

        if (s1.length() > s2.length()) {
            return -1;
        } else {
            return 1;
        }

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
