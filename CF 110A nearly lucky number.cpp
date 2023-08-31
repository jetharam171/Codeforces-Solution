#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	long long n;
	cin>>n;
	string st=to_string(n);
	//cout<<st;
	long long s=st.length();
	int cnt=0;
	for(long long i=0;i<s;i++){
		if(st[i]=='4'|| st[i]=='7'){
			cnt++;
		}
		if(cnt>7){
			cout<<"NO";
			return 0;
		}
	}
	if(cnt==4||cnt==7){
		cout<<"YES";
		return 0;
	}
	else cout<<"NO";
	return 0;
}