#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,t;
	cin>>n>>t;
	string st;
	cin>>st;
	while(t--){
		for(int i=0;i<n-1;i++){
			if(st[i]=='B' && st[i+1]=='G'){
				swap(st[i],st[i+1]);
				i++;
			}
		}
	}
	cout<<st;
	return 0;
}