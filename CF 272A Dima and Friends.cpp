#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	int sum=0;
	for(int i=0;i<n;i++){
		int z;
		cin>>z;
		sum+=z;
	}
	if(sum%(n+1)==n){
		cout<<1;
		return 0;
	}
	else {
		cout<<2;
		return 0;
	}
}