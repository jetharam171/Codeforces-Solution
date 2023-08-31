#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	 vector<vector<int>>ans(5,vector<int>(5,0));
	 vector<vector<int>>v(5,vector<int>(5,0));
	 for(int i=1;i<4;i++){
	 	for(int j=1;j<4;j++){
	 		int z;
	 		cin>>z;
	 		v[i][j]=z;
	 	}
	 }
    for(int i=1;i<4;i++){
	 	for(int j=1;j<4;j++){
            if((v[i][j+1]+v[i][j-1]+v[i-1][j]+v[i+1][j]+v[i][j])%2==0){
         	ans[i][j]=1;
            }
	 	}
	}
	for(int i=1;i<4;i++){
	 	for(int j=1;j<4;j++){
	 		cout<<ans[i][j];
	 	}
	 	cout<<endl;
	 }
}