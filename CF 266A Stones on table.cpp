#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	if(n==1){
		cout<<0;
		return 0;
	}
	string st;
	cin>>st;
	int cnt=0;
	char last=st[0];
	for(int i=1;i<n;i++){
		if(st[i]==last){
			cnt++;
		}
		else {
			last=st[i];
		}
	}
	cout<<cnt;
	return 0;
}