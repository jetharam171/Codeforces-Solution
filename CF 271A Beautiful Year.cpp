#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	int z=n+1;
	while(1){
		int temp=z;
		int a=temp%10;
		temp/=10;
		int b=temp%10;
		temp/=10;
		int c=temp%10;
		temp/=10;
		int d=temp%10;
		if(a!=b && a!=c & a!=d && b!=c && b!=d &&c!=d){
		    cout<<z;
		    return 0;
		}
		z++;
	}
}