#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	vector<int>arr(3,0);
	for(int i=0;i<n;i++){
		int x,y,z;
		cin>>x>>y>>z;
		arr[0]+=x;
		arr[1]+=y;
		arr[2]+=z;

	}
	if(arr[0]==0 && arr[1]==0 && arr[2]==0){
		cout<<"YES";
	}
	else cout<<"NO";
	return 0;
}