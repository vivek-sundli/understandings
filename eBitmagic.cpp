#include<bits/stdc++.h>
using namespace std;
bool findN(int n){
  return n&1;
}
int main(){
  int n;
  cin>>n;
  cout<<findN(n);
  return 0;
}
