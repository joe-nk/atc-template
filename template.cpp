// clang-format off
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,popcnt")
#include <atcoder/all>
#include <bits/stdc++.h>
using namespace std;
using namespace atcoder;
using i8=int8_t;
using i32=int32_t;
using i64=int64_t;
using i128=__int128;
using u8=uint8_t;
using u32=uint32_t;
using u64=uint64_t;
using u128=unsigned __int128;
using pl=pair<i64,i64>;
using pi=pair<i32,i32>;
template<class T>using vc=vector<T>;
template<class T>using pqmax=priority_queue<T>;
template<class T>using pqmin=priority_queue<T,vector<T>,greater<T>>;
template<class K,class V>using unmap=unordered_map<K,V>;
template<class K>using unset = unordered_set<K>;
#define rep4(i,a, b, c) for(i64 i=a;i<i64(b);i+=(c))
#define rep3(i,a, b) rep4(i,a,b,1)
#define rep2(i,a) rep4(i,0,a,1)
#define rep1(a) rep4(i,0,a,1)
#define rrep4(i,a,b,c) for (i64 i = b - 1; i >= i64(a); i -= (c))
#define rrep3(i,a,b) rrep4(i,a,b,1)
#define rrep2(i,a) rrep3(i,0,a)
#define rrep1(a) rrep3(i,0,a)
#define overload4(a, b, c, d, e, ...) e
#define overload3(a, b, c, d, ...) d
#define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)
#define rrep(...) overload3(__VA_ARGS__, rrep3, rrep2, rrep1)(__VA_ARGS__)
#define init() ios::sync_with_stdio(false);cin.tie(nullptr);cout<<fixed<<setprecision(20);
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define len(x) (u64((x).size()))
#define elif else if
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define fi first
#define se second
#define eb emplace_back
#define pb push_back
#define pob pop_back
#define em emplace
#define mp make_pair
#define mt make_tuple
#define UNIQUE(x) sort(all(x)),x.erase(unique(all(x)),x.end()),x.shrink_to_fit()
#define next_p(x) next_permutation(all(x))
inline bool chmax(auto &a,const auto &b){return(a<b?a=b,1:0);}
inline bool chmin(auto &a,const auto &b){return(a>b?a=b,1:0);}
inline i64 LB(const auto &c,const auto &x){return ranges::lower_bound(c,x)-c.begin();}
inline i64 UB(const auto &c,const auto &x){return ranges::upper_bound(c,x)-c.begin();}
template<class T,class U>inline vc<T> prefixsum(const vc<U> &a,i32 off=1){vc<T> b(len(a)+off,0);partial_sum(all(a),b.begin()+off);return b;}
template<class T>istream &operator>>(istream &in, vc<T> &a){for(T &x:a)in>>x;return in;}
istream &operator>>(istream &in,i128 &a){string s;in>>s;bool n=0;a=0;for(char c:s){if(c=='-'){n=1;continue;}a=a*10+(c-'0');}if(n)a=-a;return in;}
istream &operator>>(istream &in,u128 &a){string s;in>>s;a=0;for(char c:s){a=a*10+(c-'0');}return in;}
ostream &operator<<(ostream &out,const i128 &a){i128 b=a;if(a==0){return out<<0;}if(a<0){out<<'-';b=-b;}string s;while(b>0){s+=char(b%10+'0');b/=10;}reverse(all(s));return out<<s;}
ostream &operator<<(ostream &out,const u128 &a){u128 b=a;if(a==0){return out<<0;}string s;while(b>0){s+=char(b%10+'0');b/=10;}reverse(all(s));return out<<s;}
void input(auto &...a){(cin>>...>>a);}
inline void YN(bool b){cout<<(b?"Yes\n":"No\n");}
inline void YESNO(bool b){cout<<(b?"YES\n":"NO\n");}
inline void yn(bool b){cout<<(b?"yes\n":"no\n");}
// clang-format on
int main() {
  init();
  atexit([] { flush(cout); });
  // TODO
}
