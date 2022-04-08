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
 ll sol(vector<ll>&arr,ll n,ll k,ll ind,vector<ll>&dp)
 {
   if(ind==0)
     return 0;
   if(dp[ind]!=-1)
     return dp[ind];
   int op1=INT_MAX;
   for(int j=1;j<=k;j++)
   {
   	if(ind-j>=0)
    {
      int curr=abs(arr[ind]-arr[ind-j])+sol(arr,n,k,ind-j,dp);
      op1=min(op1,curr);
    }
   }
   return dp[ind]=op1;
 }
void solve()
{

ll n,k;
  cin>>n>>k;
  vll arr(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  vector<ll>dp(n+1);
  dp[0]=0;
  for(int i=1;i<=n;i++)
  {
    ll curr=INT_MAX;
    for(int j=1;j<=k;j++)
    {
      if(i-j>=0)
      {
         ll jump=abs(arr[i]-arr[i-j])+dp[i-j];
          curr=min(curr,jump);
      }
    }
    dp[i]=curr;
  }
  d1(dp[n-1]);
 // ll ans=sol(arr,n,k,n-1,dp);
   // d1(ans);

return  ;
}
int32_t main(){
ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    init_code();
//cout << fixed << setprecision(9);

   ll T=1;
   //cin>>T;
   while(T--)
   {
      solve(); 
   }
 
}