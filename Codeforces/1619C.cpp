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

string a,b;
cin>>a>>b;
if(stoll(a)==stoll(b))
{
	d1(0);
	return ;
}
if(stoll(b)<stoll(a))
{
	d1(-1);
	return;
}
int i=a.length()-1;
int j=b.length()-1;
string ans="";
  while(i>=0)
    {
        if(a[i]>b[j])
        {
            if(b[j-1]=='1')
            {
                char ch=(char)(10+((b[j]-'0')-(a[i]-'0'))+'0');
                ans=ch+ans;
                j-=2;
                i--;
            }
            else 
            {
                cout<<"-1\n";
                return;
            }
        }
        else
        {
            char ch=(char)(((b[j]-'0')-(a[i]-'0'))+'0');
            ans=ch+ans;
            i--;
            j--;
        }
        if(j<0&&i>=0)
        	{
        		cout<<"-1\n"; return;
        	}
    }
    for(int k=j;k>=0;k--)ans=b[k]+ans;
    int in=0;
    for(in=0;in<ans.length();in++)
    {
        if(ans[in]!='0')break;
    }
    for(int i=in;i<ans.length();i++)cout<<ans[i];
    cout<<"\n";

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
