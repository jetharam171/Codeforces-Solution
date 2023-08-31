#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	if(n==1) {
		cout<<0;
		return 0;
	}
	vector<int>arr(n,0);
	for(int i=0;i<n;i++){
		int z;
		cin>>z;
		arr[i]=z;
	}
	int cnt=0;
	int max=arr[0];
	int min=arr[0];
    for(int i=1;i<n;i++){
    	if(arr[i]>max){
    		cnt++;
    		max=arr[i];
    	}
    	else if(arr[i]<min){
            cnt++;
            min=arr[i];
    	}
    }
    cout<<cnt;
    return 0;
}