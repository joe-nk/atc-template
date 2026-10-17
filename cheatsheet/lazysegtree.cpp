/*

// LAZYSEGTREE CHEAT SHEET
// 2026/10/17
// FROM https://betrue12.hateblo.jp/entry/2020/09/23/005940
*/

#include <bits/stdc++.h>

using namespace std;
using i32=int32_t;
using i64=int64_t;

/* RANGE ADD/MIN
i64 op(i64 a,i64 b){return min(a,b);}
i64 e(){return (i64)(8e18);}
i64 mapping(i64 f,i64 x){return f+x;}
i64 composition(i64 f,i64 g){return f+g;};
i64 id(){return 0};
*/

/* RANGE ADD/MAX
i64 op(i64 a,i64 b){return max(a,b);}
i64 e(){return -(i64)(8e18);}
i64 mapping(i64 f,i64 x){return f+x;}
i64 composition(i64 f,i64 g){return f+g;};
i64 id(){return 0};
*/

/* RANGE ADD/SUM
struct S{
    i64 v;
    i32 s;
};
S op(S a, S b){return{a.v+b.v,a.s+b.s};}
S e(){return {0,0};}
S mapping(i64 f,S x){return{x.v+f*x.s,x.s};}
i64 composition(i64 f,i64 g){return f+g;}
i64 id(){return 0;}
*/

/* RANGE UPD/MIN
i64 op(i64 a,i64 b){return min(a,b);}
i64 e(){return (i64)(8e18);}
i64 mapping(i64 f,i64 x){return (f==(i64)(8e18)?x:f);}
i64 composition(i64 f,i64 g){return (f==(i64)(8e18)?g:f);};
i64 id(){return (i64)(8e18)};
*/

/* RANGE UPD/MAX
i64 op(i64 a,i64 b){return max(a,b);}
i64 e(){return -(i64)(8e18);}
i64 mapping(i64 f,i64 x){return (f==(i64)(8e18)?x:f);}
i64 composition(i64 f,i64 g){return (f==(i64)(8e18)?g:f);};
i64 id(){return (i64)(8e18)};
*/

/* RANGE UPD/SUM
struct S{
    i64 v;
    i32 s;
};
S op(S a, S b){return{a.v+b.v,a.s+b.s};}
S e(){return {0,0};}
S mapping(i64 f,S x){if(f!=(i64)(8e18)){x.v=f*x.s;}return x;}
i64 composition(i64 f,i64 g){return (f==(i64)(8e18)?g:f);};
i64 id(){return (i64)(8e18)};
*/
