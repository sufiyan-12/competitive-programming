#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define ppb pop_back
#define F first
#define S second
#define pi pair<int, int>
#define pl pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vpi vector<pair<int, int>>
#define vpl vector<pair<long long, long long>>
#define pqq priority_queue
#define umap unordered_map
#define uset unordered_set
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define len(x) (int)x.length()

// code by sufiyan_12

void nge(vi& a){
	int mx = 
	for(int i=a.size()-2; i>=0; i--){

	}
}

void solve(){
	int n;
	cin >> n;

	vector<ll> a(n);

	for(int i=0; i<n; ++i){
		cin >> a[i];
	}

	nge(a);
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
		solve();
		cout << '\n';
	}
    return 0;
}