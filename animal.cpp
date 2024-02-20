#pragma GCC optimize("Ofast")
#pragma GCC target("avx2")
#include <bits/stdc++.h>
using namespace std;
namespace {
// clang-format off
#define rep(i,a,b)for(ll i=(a);i<ll(b);++i)
#define per(i,a,b)for(ll i=(a);i-->ll(b);)
#define all(x)begin(x),end(x)
#define rall(x)rbegin(x),rend(x)
#define sz(x)static_cast<ll>(size(x))
using ll=std::int64_t;using ull=std::uint64_t;
#ifndef _MSC_VER
using lll=__int128_t;using ulll=__uint128_t;
#endif
using pii=pair<int32_t,int32_t>;using pll=pair<ll,ll>;using vi=vector<ll>;template<class... Ts>using vo=vector<Ts...>;template<class... Ts>using min_queue=priority_queue<Ts...,vo<Ts...>,greater<>>;template<class... Ts>using max_queue=priority_queue<Ts...>;template<class... Ts>using umap=unordered_map<Ts...>;template<class... Ts>using uset=unordered_set<Ts...>;namespace{[[maybe_unused]] constexpr bool assume(bool x){
#if defined(__clang__)||defined(__GNUC__)
if(!x)__builtin_unreachable();
#endif
return x;}constexpr bool likely(bool x){
#if defined(__clang__)||defined(__GNUC__)
return __builtin_expect(x,1);
#else 
return x;
#endif
}constexpr bool unlikely(bool x){return!likely(!x);}namespace _gc_data{char buf[1<<16]{};size_t bc=0,be=0;bool last_read=false;}[[maybe_unused]] void un_gc(){--_gc_data::bc;}int gc(){if(likely(_gc_data::bc<_gc_data::be)){return _gc_data::buf[_gc_data::bc++];}else{if(_gc_data::last_read)return EOF;_gc_data::buf[0]=0,_gc_data::bc=0;_gc_data::be=fread(_gc_data::buf,1,sizeof(_gc_data::buf),stdin);if(unlikely(feof(stdin))){_gc_data::last_read=true;_gc_data::buf[_gc_data::be]=EOF;}return _gc_data::buf[_gc_data::bc++];}}[[maybe_unused]] int peek(){int res=gc();un_gc();return res;}[[maybe_unused]] int gc_unchecked(){return _gc_data::buf[_gc_data::bc++];}bool can_read_n_chars_unchecked(int n){return _gc_data::bc+(n-1)<_gc_data::be;}bool is_space(char c){return(c==' ')|(c=='\t')|(c=='\n')|(c=='\v')|(c=='\f')|(c=='\r');}bool is_digit(char c){return('0'<=c)&(c<='9');}namespace _print_cache{constexpr ll buf_size=1<<16;char buf[buf_size+1]{};char*p=buf;bool can_print_n_chars(std::size_t n){return p+n<=buf+buf_size;}void flush(){*p='\0';cout<<buf;p=buf;assume(can_print_n_chars(buf_size));}struct flusher{~flusher(){flush();}}_;}void print_impl_fast(char x){using namespace _print_cache;if(unlikely(p==buf+buf_size))flush();*p++=x;}[[maybe_unused]] void print_impl_fast(std::string_view s){using namespace _print_cache;if(int(unlikely((p+sz(s)>=buf+buf_size))|int(sz(s)>=buf_size/4))){flush();cout<<s;}else{memcpy(p,&s[0],sz(s));}}[[maybe_unused]] void print_impl_fast(unsigned char x){print_impl_fast((char)x);}[[maybe_unused]] void print_impl_fast(signed char x){print_impl_fast((char)x);}void print_impl_fast_unchecked(uint64_t x){using namespace _print_cache;auto [ptr,ec]=std::to_chars(p,buf+buf_size,x,10);assume(ec==std::errc());p=ptr;}void print_impl_fast(uint64_t x);[[maybe_unused]] void print_impl_fast(uint16_t x){print_impl_fast((ull)x);}[[maybe_unused]] void print_impl_fast(uint32_t x){print_impl_fast((ull)x);}[[maybe_unused]] void print_impl_fast(uint64_t x){using namespace _print_cache;if(unlikely(!can_print_n_chars(20)))flush();print_impl_fast_unchecked(x);}void print_impl_fast_unchecked(int64_t x){using namespace _print_cache;auto [ptr,ec]=std::to_chars(p,buf+buf_size,x,10);assume(ec==std::errc());p=ptr;}void print_impl_fast(int64_t x);[[maybe_unused]] void print_impl_fast(int16_t x){print_impl_fast((ll)x);}[[maybe_unused]] void print_impl_fast(int32_t x){print_impl_fast((ll)x);}[[maybe_unused]] void print_impl_fast(int64_t x){using namespace _print_cache;if(unlikely(!can_print_n_chars(20)))flush();print_impl_fast_unchecked(x);}template<class T>auto print_impl(T const&x)->decltype(std::cout<<x,void()){if constexpr(std::is_integral_v<T>||std::is_same_v<std::remove_cv_t<std::remove_reference_t<T>>,char>){print_impl_fast(x);}else{_print_cache::flush();std::cout<<x;}}template<class T>auto print(T const&x)->decltype(std::cout<<x,void()){print_impl(x);}template<class T>auto print(T const&x)->typename std::enable_if<!std::is_constructible_v<decltype(x),std::string>&&!std::is_constructible_v<std::string,decltype(x)>,decltype(std::begin(x),std::end(x),void())>::type{for(auto&&i:x)print(i),print_impl(' ');}template<class T0,class... Ts>void print(T0 const&x,Ts const&...p){print(x);print_impl(' ');print(p...);}template<class T>void println(T const&x){print(x);print_impl('\n');}template<class T0,class... Ts>void println(T0 const&x,Ts const&...p){print(x);print_impl(' ');println(p...);}template<class T>typename std::enable_if<std::is_integral<T>::value||std::is_floating_point<T>::value,bool>::type read(T&x);[[maybe_unused]] bool read(std::string&x);template<class T>auto read(T&x)->typename std::enable_if<!std::is_convertible<decltype(x),std::string&>::value,decltype(std::begin(x),std::end(x),bool{})>::type{for(auto&&i:x)if(unlikely(!read(i)))return false;return true;}[[maybe_unused]] bool read(std::string&x){x.resize(0);int c=gc();while(is_space(c)&(c!=EOF))c=gc();if(unlikely(c==EOF))return false;while(!is_space(c)&(c!=EOF)){x.push_back(c);c=gc();}un_gc();return true;}[[maybe_unused]] bool _read_str(char*x,std::size_t max_n){if(unlikely(max_n==0))return true;int c=gc();while(is_space(c)&(c!=EOF))c=gc();if(unlikely(c==EOF))return false;constexpr int BLOCK_SIZE=64;while(!(is_space(c)|(c==EOF))&(max_n>=BLOCK_SIZE)){int iters=BLOCK_SIZE;if(likely(can_read_n_chars_unchecked(BLOCK_SIZE))){while((!(is_space(c)|(c==EOF)))&int(iters-->=0)){*x++=c;c=gc_unchecked();}}else{while((!(is_space(c)|(c==EOF)))&int(iters-->=0)){*x++=c;c=gc();}}max_n-=BLOCK_SIZE-iters;}while(!(is_space(c)|(c==EOF))&&max_n--){*x++=c;c=gc();}un_gc();return true;}[[maybe_unused]] bool _read_str_line(char*x,std::size_t max_n){if(unlikely(max_n==0))return true;int c=gc();constexpr int BLOCK_SIZE=64;while(!((c=='\r')|(c=='\n')|(c==EOF))&(max_n>=BLOCK_SIZE)){int iters=BLOCK_SIZE;if(likely(can_read_n_chars_unchecked(BLOCK_SIZE))){while(!((c=='\r')|(c=='\n')|(c==EOF))&(iters-->=0)){*x++=c;c=gc_unchecked();}}else{while(!((c=='\r')|(c=='\n')|(c==EOF))&(iters-->=0)){*x++=c;c=gc();}}max_n-=BLOCK_SIZE-iters;}while(!((c=='\r')|(c=='\n')|(c==EOF))&&max_n--){*x++=c;c=gc();}un_gc();return true;}[[maybe_unused]] bool readln(char*x){return _read_str_line(x,-1);}[[maybe_unused]] void ignore_newlines(std::size_t n=std::numeric_limits<std::size_t>::max()){int c=gc();while(int(n-->0)&int((c=='\n')|(c=='\r'))){c=gc();}if((c!='\n')&(c!='\r'))un_gc();}[[maybe_unused]] bool readln(std::string&x){x.resize(0);int c=gc();if(c==EOF)return false;while(!((c=='\r')|(c=='\n')|(c==EOF))){x.push_back(c);c=gc();}return true;}[[maybe_unused]] bool read(char*x){return _read_str(x,static_cast<std::size_t>(-1));}[[maybe_unused]] bool read(char&x){return _read_str(&x,1);}template<class T>typename std::enable_if<std::is_integral<T>::value||std::is_floating_point<T>::value,bool>::type read(T&x){x=0;int sign=1;int c=gc();while(!is_digit(c)&(c!='-')&(c!=EOF))c=gc();if(unlikely(c==EOF))return false;if(c=='-')sign=-1,c=gc();if(likely(can_read_n_chars_unchecked(32))){int iters=32;while(is_digit(c)&&iters--)x=x*10+c-'0',c=gc_unchecked();if(unlikely(is_digit(c))){while(is_digit(c))x=x*10+c-'0',c=gc();}}else{while(is_digit(c))x=x*10+c-'0',c=gc();}long double fractional_part=0;long double pow10=1;if(unlikely(c=='.')){c=gc();while(is_digit(c)){fractional_part+=(pow10*=0.1)*(c-'0');c=gc();}}if(unlikely((c=='e')|(c=='E'))){c=gc();int exponent=0;int sign=1;if(c=='-')sign=-1,c=gc();while(is_digit(c)){exponent=exponent*10+c-'0';c=gc();}exponent*=sign;if(likely(exponent)){auto mult=std::pow(10.l,exponent);x=x*mult+fractional_part*mult;}}else if(std::is_floating_point<T>::value){x+=fractional_part;}x*=sign;return true;}[[maybe_unused]] ll read_simple(){ll ans=0;int sign=1;int c=gc();while(!is_digit(c)&(c!='-')&(c!=EOF))c=gc();if(unlikely(c==EOF))return false;if(c=='-')sign=-1,c=gc();if(likely(can_read_n_chars_unchecked(20)))while(is_digit(c))ans=ans*10+c-'0',c=gc_unchecked();else while(is_digit(c))ans=ans*10+c-'0',c=gc();un_gc();return ans*sign;}template<class T0,class... Ts>bool read(T0&&x,Ts&&...p){if(unlikely(!read(std::forward<T0>(x)))){return false;}return read(std::forward<Ts>(p)...);}template<class T=ll>T read(){T res;read(res);return res;}template<std::size_t idx,class... T>std::enable_if_t<idx==sizeof...(T),void>read_tuple_impl(std::tuple<T...>&){}template<std::size_t idx,class... T>std::enable_if_t<(idx<sizeof...(T)),void>read_tuple_impl(std::tuple<T...>&t){read(std::get<idx>(t));read_tuple_impl<idx+1,T...>(t);}template<class... T>std::enable_if_t<(sizeof...(T)>1),std::tuple<T...>>read(){std::tuple<T...>res{};read_tuple_impl<0,T...>(res);return res;}template<size_t n,class T=ll>std::array<T,n>read(){std::array<T,n>res{};for(T&i:res)read(i);return res;}}
#if defined(LOCAL)
namespace{template<class T>void _debug(T const&x){if constexpr(!std::constructible_from<std::string,T>&&requires{std::begin(x),std::end(x);}){std::cerr<<"{";bool first=true;for(auto&&i:x){if(!first)std::cerr<<",";first=false;_debug(i);}std::cerr<<"}";}else if constexpr(requires{x.first,x.second;}){std::cerr<<"{";_debug(x.first);std::cerr<<",";_debug(x.second);std::cerr<<"}";}else if constexpr(std::constructible_from<std::string,T>){std::cerr<<std::quoted(x);}else if constexpr(requires{std::cerr<<x;}){std::cerr<<x;}else{static_assert(requires{std::cerr<<x;}&&"x is not printable");}}template<class T>void dbg(T const&x){_print_cache::flush();std::cerr.flush();std::cout.flush();_debug(x);std::cerr<<'\n';std::cerr.flush();}template<class T0,class... Ts>void dbg(T0 const&x,Ts const&...p){_debug(x);std::cerr<<' ';dbg(p...);}}
#else 
#define dbg(...)(void)0
#endif
// clang-format on
} // namespace

constexpr ull MOD = 1e9 + 7;
constexpr ull PRIME = 31;

constexpr ull ipow(ull b, ull e) {
    ull res = 1;
    while (e) {
        if (e & 1) res = res * b % MOD;
        b = b * b % MOD;
        e >>= 1;
    }
    return res;
}

ull random_vals[100'001];

struct node {
    node *left = nullptr;
    node *right = nullptr;
    ull hash = 0;
    ull num_children = 0;
    ull value = 0;

    void reset_hashes() {
        hash = 0;
        if (left) {
            left->reset_hashes();
        }
        if (right) {
            right->reset_hashes();
        }
    }

    ull compute_hash() {
        if (hash) {
            return hash;
        }

        bool is_leaf = value == 0;
        if (!is_leaf) {
            hash += left->compute_hash();
            hash += right->compute_hash();
        } else {
            hash = random_vals[value];
        }

        return hash;
    }

    void put_hashes(umap<ull, vo<node *>> &mp) {
        if (left) {
            left->put_hashes(mp);
        }

        if (right) {
            right->put_hashes(mp);
        }

        if (!value) 
            mp[compute_hash()].push_back(this);
    }
};

node *parse(string_view &inp) {
    assert(!inp.empty());
    if (inp[0] == '(') {
        node *res = new node();
        inp = inp.substr(1);
        res->left = parse(inp);
        inp = inp.substr(1);
        res->right = parse(inp);
        inp = inp.substr(1);
        res->num_children = res->left->num_children + res->right->num_children;
        return res;
    } else {
        node *res = new node();
        while (!inp.empty() && '0' <= inp[0] && inp[0] <= '9') {
            res->value = res->value * 10 + inp[0] - '0';
            inp = inp.substr(1);
        }

        res->num_children = 1;
        return res;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.precision(15);
    cerr.precision(15);

    ll start = clock();
    ll n;
    read(n);
    string a, b;
    read(a, b);
    string_view av = a, bv = b;
    node *at = parse(av), *bt = parse(bv);

    default_random_engine rnd{random_device{}()};
    set<pair<node *, node *>> potential_matches;
    bool first = true;
    rep(i, 0, 8) {
        generate(all(random_vals), [&]() { return uniform_int_distribution<ull>{}(rnd); });
        umap<ull, vo<node *>> a_hashes;
        umap<ull, vo<node *>> b_hashes;
        at->reset_hashes();
        bt->reset_hashes();
        at->put_hashes(a_hashes);
        bt->put_hashes(b_hashes);

        bool skip = false;
        set<pair<node *, node *>> local_matches;
        for (auto [h, a_nodes]: a_hashes) {
            for (auto b_node: b_hashes[h]) {
                for (auto a_node: a_nodes) {
                    if (b_node->num_children == a_node->num_children) {
                        local_matches.insert({a_node, b_node});
                    }
                }
            }
        }
        if (skip) continue;

        if (first) {
            first = false;
            potential_matches = local_matches;
        } else {
            vo<pair<node *, node *>> to_remove;
            for (auto [an, bn]: potential_matches) {
                if (!local_matches.count({an, bn})) {
                    to_remove.push_back({an, bn});
                }
            }
            for (auto i: to_remove) {
                potential_matches.erase(i);
            }
        }
    }
    println(n + potential_matches.size());
}