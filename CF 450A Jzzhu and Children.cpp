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
	int n;
	cin>>n;
	int m;
	cin>>m;
	int maxir=0;
	int ans=0;
	fori(n){
		int z;
		cin>>z;
		int ro;
		if(z%m==0){
			ro=z/m;
		}
		else ro=z/m+1;
		if(ro>=maxir){
			maxir=ro;
			ans=i+1;
		}
	}
    cout<<ans;
}