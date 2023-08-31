#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	vector<int>arr;
	map<int,int>mpv;
	map<int,int>mpp;
	for(int i=0;i<n;i++){
		int z;
		cin>>z;
		mpv[z]=0;
		mpp[z]=n+1;
		arr.push_back(z);
	}
	int q;
	cin>>q;
	vector<int>qu;
	for(int i=0;i<q;i++){
		int z;
		cin>>z;
		mpv[z]=0;
		mpp[z]=n+1;
		qu.push_back(z);
	}
   for(int i=0;i<n;i++){
   	int z=arr[i];
   	if(!mpv[z]){
   		mpv[z]=i+1;
   	}
    if(mpp[z]>(n-i)){
    	mpp[z]=n-i;
    }
   }
   long long vat=0;
   for(int i=0;i<q;i++){
   	int z=qu[i];
   	vat+=mpv[z];
   }
   long long pe=0;
   for(int i=0;i<q;i++){
   	int z=qu[i];
    pe+=mpp[z];
   }
   cout<<vat<<" "<<pe;
}