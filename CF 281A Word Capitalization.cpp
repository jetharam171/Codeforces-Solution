#include <bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string st;
	cin>>st;
    if(st[0]>=97){
        st[0]-=32;
       }
       cout<<st;
       return 0;
}