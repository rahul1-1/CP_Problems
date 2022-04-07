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

ll n,m;
cin>>n>>m;
string s,s1;
cin>>s>>s1;
if(m>n)
{
	for(int i=0;i<n;i++)
	{
		if(s[i]=='?')
		{
			s[i]='a';
		}
	}
	cout<<s<<endl;
	return;
}


int i=0,j=0;
set<char>st;
for(int i=0;i<n&&j<m;i++)
{
	st.insert(s1[i]);
	if(s1[j]==s[i])
	{
		j++;
	}
}


if(j==m)
{
	d1(-1);
	return;
}


for(char ch='a';ch<='e';ch++)
{
	if(st.find(ch)==st.end())
	{
	for(int i=0;i<n;i++)
	{
		if(s[i]=='?')
		{
			s[i]=ch;
		}
	}
	cout<<s<<endl;
	return;
	}
}


for(char ch='a';ch<='e';ch++)
{
	string k="";
	for(int i=0;i<n;i++)
	{
			if(s[i]=='?')
			{
				k+=ch;
			}
			else
			{
				k+=s[i];
			}
	}
	
	int l=0,r=0;

for(l=0;l<n&&r<m;l++)
{
	
	if(s1[r]==k[l])
	{
		r++;
	}
}

if(r!=m)
{
	d1(k);
	return;
}
	
	
}

d1(-1);


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