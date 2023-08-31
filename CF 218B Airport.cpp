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
	int totp;
	cin>>totp;
	int n;
	cin>>n;
	vi seatleft(n,0);
	int sumvacant=0;
	fori(n){
		int z;
		cin>>z;
		sumvacant+=z;
		seatleft[i]=z;
	}
	vi seatleft1=seatleft;
	if(totp>=sumvacant){
		int maxi=0;
		fori(n){
			maxi+=seatleft[i]*(seatleft[i]+1)/2;
		}
		cout<<maxi<<" "<<maxi;
		return 0;
	}
	else {
		int totp1=totp;
		sr(seatleft);
		int maxxi=0;
		int minim=0;
		if(n==1){
			s(seatleft1);
		for(int i=0;i<n && totp1!=0;i++){
			if(seatleft1[i]==0) continue;
			else{
				minim+=seatleft1[i];
				totp1--;
				seatleft1[i]--;
				i--;
			}
		}
		cout<<minim<<" "<<minim;
		return 0;
	}
		while(totp!=0){
			for(int i=0;i<n-1 && totp!=0;i++){ 
				if(seatleft[i]>=seatleft[i+1]){
					totp--;
					maxxi+=seatleft[i];
					seatleft[i]--;
					if(i>=1 && seatleft[i-1]==seatleft[i] && seatleft[i+1]<=seatleft[i]){
						while(seatleft[i-1]==seatleft[i] && i>=1){
							i--;
						}
					}
					i--;
				}
			}
			if(totp!=0){
				while(seatleft[n-1]>seatleft[n-2]){
                      totp--;
                      maxxi+=seatleft[n-1];
                      seatleft[n-1]--;
				}
			}
		}
		s(seatleft1);
		for(int i=0;i<n && totp1!=0;i++){
			if(seatleft1[i]==0) continue;
			else{
				minim+=seatleft1[i];
				totp1--;
				seatleft1[i]--;
				i--;
			}
		}
		cout<<maxxi<<" "<<minim;
	}
}