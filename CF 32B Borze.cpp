#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string st;
	cin>>st;
	string ans;
	int n=st.length();
	for(int i=0;i<n;i++){
           if(st[i]=='.'){
           	ans.push_back('0');
           }
           else if(st[i]=='-' && i!=n-1){
           	if(st[i+1]=='-'){
           		ans.push_back('2');
           		i++;
           	}
           	else {
           		ans.push_back('1');
           		i++;
           	}
           }
           else {
           	ans.push_back('1');
           }
	}
	cout<<ans;
	return 0;
}