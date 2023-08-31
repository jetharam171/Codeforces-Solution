#include<bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back
#define p push
#define sll stack<long long>
#define si stack<int>
#define qi queue<int>
#define qll queue<long long>
#define vll vector<long long>
#define vvi vector<vi>
#define vvll vector<vll>
#define vstr vector<string>
#define vpl vector<pair<ll,ll>>
#define vpi vector<pair<int,int>>
#define fori(n) for(int i=0;i<n;i++)
#define forj(n) for(int j=0;j<n;j++)
#define fork(n) for(int k=0;k<n;k++)
#define fori1(n) for(int i=1;i<n;i++)
#define f(i,a,b) for(int i=a;i<=b;i++)
#define s(v) sort(v.begin(),v.end())
#define sr(v) sort(v.rbegin(),v.rend())
#define MOD 1000000007
#define pi 3.14159265358979323
#define yn(n) if(n)cout<<"yes\n";else cout<<"no\n";
#define Yn(n) if(n)cout<<"Yes\n";else cout<<"No\n";
#define YN(n) if(n)cout<<"YES\n";else cout<<"NO\n";
#define mp make_pair 
#define ff first
#define ss second
int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string st;
	cin>>st;
	int n=st.length();
	if(n<5){
		cout<<"NO";
	}
	else{
		int lc=0;		 
		int j=0;
		for(int i=0;i<n;i++){
			if(st[i]=='h'){
                j=i+1;
                break;
			}
			j=i;
		}
		if(j>(n-4)){
			cout<<"NO";
			return 0;
		}
		for(int i=j;i<n;i++){
			if(st[i]=='e'){
                j=i+1;
                break;
			}
			j=i;
		}
		if(j>(n-3)){
			cout<<"NO";
			return 0;
		}
        for(int i=j;i<n;i++){
			if(st[i]=='l'){
				 lc++;
				 if(lc==2){
				 	j=i+1;
				 	break;
				 }
				 else{
				 	j=i;
				 }
			}
			j=i;
		}
		//cout<<j;
		if(lc!=2) {
			cout<<"NO";
			return 0;
		}
		if(j>(n-1)){
			cout<<"NO";
			return 0;
		}
		for(int i=j;i<n;i++){
			if(st[i]=='o'){
                cout<<"YES";
                return 0;
			}
			j=i;
		}
		cout<<"NO";
	}
}