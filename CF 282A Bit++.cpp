#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	int cnt=0;
	for(int i=0;i<n;i++){
		string st;
		cin>>st;
		if(st[1]=='+'){
			cnt++;
		}
		else{
			cnt--;
		}
	}
	cout<<cnt;
}