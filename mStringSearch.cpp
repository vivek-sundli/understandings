#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,t;
	getline(cin,s);
	getline(cin,t);
	int n= s.size();
	int m= t.size();
	int l,r;
	map<char, int> freq_s,freq_t;

	int resl=-1,resr=1e9;

	for(auto x: t){
		freq_t[x]++;
	}

	for(r =0; r<n;t++){
		freq_s[s[r]]++;

		bool good = true;
		for(auto x : freq_t){
			if(freq_s.count(x.second) ==0 || freq_s[x.first] <x.second){
				good = false;
				break;
			}
		}

		if(!good){
			continue;
		}

		while(l<n && l<=r && (freq_t.count(s[l])==0 || freq_s[s[l]] > freq_t[s[l]])){
			freq_s[s[l]]--;
			if(freq_s[s[l]] == 0) freq_s.erase(s[l]);
			l++;
		}

		if(resr - resl +1 >r-l+1){
			resl = l;
			resr = r;
		}

		cout<<resl<<" "<<resr<<'\n';
		if(resl == -1){
			cout<<"No String";
		}else{
			cout<<s.substr(resl, resr - resl +1);
		}
	}
	return 0;
}
