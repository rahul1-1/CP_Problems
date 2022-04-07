#include<bits/stdc++.h>
#define ll long long
#define vi             vector<int>
#define vll             vector<ll>
#define vb             vector<bool>
#define vs             vector<string>
#define vvi            vector<vector<int>>
#define vpi            vector<pair<int,int>>
#define vpll           vector<pair<ll,ll>>
#define pi             pair<int,int>
#define pll           pair<ll,ll>
#define pb             emplace_back
#define mp             make_pair
#define d1(x) cout << (x) << '\n';
#define d2(x,y)cout<<(x)<<" "<<(y)<<'\n';
#define loop1(i, n) for (int i = 1; i <= (n); i++)
#define loop(i, n) for (int i = 0; i < (n); i++)
#define sz(x) (int)x.size()
#define lth(x) (int)x.length()
#define all(v) v.begin(), v.end()
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int>>

#define F first
#define S  second
const int INF = 2000000005;
const ll INFLL = 1000000000000000002ll;
const ll mod = 1000000007;
 

using namespace std;

void init_code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
 
int power(int n , int k) {
    if (k == 0)return 1;
    int temp = power(n, k / 2);
    temp = (temp * temp);
    if (k % 2) return (temp * n);
    return temp;
}
int fact(int x)
{
    int res = 1;
    for(int i=2;i<=x;i++)
        res = i*res;
    return res;
}
 
int choose(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
 
int gcd(int a, int b)
{
    if (min(a, b) == 0)
        return max(a, b);
    return gcd(min(a, b), max(a, b) % min(a, b));
}
 
int lcm(int a, int b)
{
    int x = gcd(a, b);
    return abs(a*b) / x;
}
 ll NcR(ll n, ll k)
{
	if(n<k)
	return 0;
    ll res = 1;

    if (k > n - k)
        k = n - k;

    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
 
    return res;
}
 
bool prime(ll m)
{
    if(m<=1)
    return false;
   
    for(int i=2;i<m;i++)
    if(m%i==0)
    return false;
    
    return true;
}
 
void solve()
{

ll n;
cin>>n;
vll arr;
set<ll>st;
for (int i = 0; i < n; ++i)
{
	ll t;
	cin>>t;
	st.insert(t);
}
for(auto x:st)
{
	arr.push_back(x);
}
// sort(all(arr));
ll mex=0;
for(int i=0;i<n;i++)
{
	if(arr[i]!=mex)
		break;
	mex++;
	
}

// cout<<" mex "<<mex<<endl;
if(mex==0)
{
	d1(arr[0]-1);
	return;
}
 if(mex==1)
{
	d1(-1);
	return ;
}
ll ans=0;
for(int i=0;i<arr.size();)
{
	int j=i+1;
	ll cnt=1;
	while(j<n&&arr[j]-arr[j-1]==1)
	{
		j++;
		cnt++;
	}
	if(cnt>=(mex-1))
	{
		ans++;
	}
	i=j;
}
--ans;
d1(ans);
return  ;
}
int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    init_code();
//cout << fixed << setprecision(9);

   ll T=1;
   cin>>T;
   while(T--)
   {
      solve(); 
   }
 
}