#include <bits/stdc++.h>
using namespace std;

// 
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define endl "\n"
#define sp <<" "<<
#define YES "YES"
#define NO "NO"

#define ms(s,n) memset(s,n,sizeof(n))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find() != t.end())
#define sz(a) int((a).size())
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define test int tc; cin>>tc; while(tc--)

// DEFINE FUNCTIONS
#define f(i,a,b)  for (long long int i = (a); i < (b); ++i)
#define range(i,a,b)  for (long long int i = (a); i <= (b); ++i)
#define rf(i,a,b) for (long long int i = (a) - 1; i >= (b); --i) 
#define foreach(a) for (auto v:a)


// TYPES
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> ii;
typedef pair<long, long> pll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<pair<int, int>> vii;
typedef map<int, int> mii;
typedef set<int> si;
typedef set<char> sc;

// UTILS
const int MOD = (int) 1e9 + 7;
const int INF = (int) 1e9 + 1910;
const double PI = 3.1415926535897932384626433832795;
inline ll min(ll a,int b) { if (a<b) return a; return b; }
inline ll min(int a,ll b) { if (a<b) return a; return b; }
inline ll max(ll a,int b) { if (a>b) return a; return b; }
inline ll max(int a,ll b) { if (a>b) return a; return b; }
inline ll gcd(ll a, ll b) { ll r; while(b) { r = a % b; a=b; b=r; } return a; }
inline ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
inline bool isPrime(ll a) { if (a == 1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a % i == 0) return 0; return 1; }
inline void yes() { cout << "YES\n"; }
inline void no() { cout << "NO\n"; }

ll sum(ll l, ll r) {
	ll sum = 0;
	
	range(i,l,r)
		if (i % 2 == 0) 
			sum += i;
			
	return sum;
}

int main(int argc, char** argv) {
	op();
//	
//	test {
//		int a;
//		cin >> a;
//		cout << a;
//	}
	
	ll l, r; cin>>l>>r;
	cout << sum(l,r);
	
	return 0;
}
