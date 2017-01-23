//humanity is a very illusive quality

/*
Name:
OJ:
Link:
Algorithm:
Type:
Difficulty:
Interest:
Additional:
*/
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cctype>

#include<cmath>
#include<iostream>
#include<fstream>

#include<string>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#include<set>
#include<sstream>
#include<stack>
#include <ctime>
using namespace std;

class TimeLogger {
    clock_t st, nd; double elapsed;
public:
	TimeLogger() { st = clock(); }
	~TimeLogger() {
		nd = clock(); elapsed = (nd - st)/(double)CLOCKS_PER_SEC;
		printf("\nYour program took %.3lf seconds\n", elapsed);
	}
};

const int    inf = (1<<28);
const double pi  = (2.0*acos(0.0));
const double eps = 1e-9;
const double eps2 = 1e-12; //  printf rounder
const double sensitiveEPS = 1e-14;// depends on digits after . ex 7 digit

typedef long long           lli;
//typedef __int64             lli;
//typedef unsigned long long  llu;
//typedef unsigned __int64    llu;
//typedef pair < int , int >  pii;
//typedef vector < int >      vi;
//typedef vector < string >   vs;

#define isp2( a ) (!(a & (a-1)))
#define CLR( a )  memset(a , 0  , sizeof (a))
#define SET( a , b)  memset(a , b , sizeof (a))
#define SZ( a )   ((int)a.size())
#define all( a )  a.begin(),a.end()


//#define _rep( i, a, b, x ) for( __typeof(b) i = ( a ); i <= ( b ); i += x )
#define _rep( i, a, b, x )  for( i = ( a ) ; i <= ( b ) ; i += x )
#define rep( i, n )        _rep( i, 0, n - 1, 1 )
#define _rrep( i, a, b, x ) for( i = (a) ; i >= (b) ; i -= x )
#define rrep( i, a, b)     _rrep( i, a, b, 1)
#define xrep( i, a, b)     _rep( i, a, b, 1)

#define SD( a ) scanf("%d",&a)
#define SL( a ) scanf("%lld",&a)
#define SI( a ) scanf("%I64d",&a)
#define SS( a ) scanf("%s",a)
#define SF( a ) scanf("%lf",&a)

#define pb push_back
#define ff first
#define ss second
///Comparision macros
#define _aEb(a,b) (fabs((a)-(b))<eps)
#define _aGb(a,b) ((a)>(b)+eps)
#define _aLb(a,b) ((a)+eps<(b))
#define _aLEb(a,b) (_aLb(a,b) || _aEb(a,b))
#define _aGEb(a,b) (_aGb(a,b) || _aEb(a,b))
#define _minf(a,b) ((a)+eps<(b)?(a):(b))
#define _maxf(a,b) ((a)+eps<(b)?(b):(a))
#define _sq(x) ((x)*(x))

void bitOperations()
{
    int mask,i;
    /// checking if a bit is on
    if( mask & (1<<i) );
    /// checking if its off
    if( !( mask & (1<<i)) );
    /// turning it on
    mask |= ( 1<< i ); // mask = mask | (1<<i)
    /// turning it off
    //mask &= ~( 1 << i );
}

void vectorF()
{
    int i;
    vector < int > v;

    v.push_back( 12 );
    v.push_back( 11 );
    v.push_back( 17 );
    v.push_back( 1 );
    v.push_back( 0 );

    for( i = 0 ; i <= (int)v.size() ; i++ )
        printf("%d ",v[i]); puts("");

    sort( v.begin() , v.end() );

    for( i = 0 ; i <= (int)v.size() ; i++ )
        printf("%d ",v[i]); puts("");

    vector< vector<int> > vv;
    vector< int > vvv[10][10];
    vector< vector< vector< int > > > x;
    vector< vector<int> > vvvv[10];
    ///etc.

}

void queueF()
{
    queue < int > Q;
    Q.push( 10 );
    Q.push( 50 );
    Q.push( 100 );

    //while( (int)Q.size() > 0 )
    while( !Q.empty() )
    {
        int tmp = Q.front();
        printf("%d\n",tmp);
        Q.pop();
    }
}

void stackF()
{
    stack < int > S;
    S.push( 100 );
    S.push( 10 );
    cout << S.top() << endl;
    S.pop();

    cout << S.empty() << endl;
}

void pqueueF()
{
    priority_queue < int > Q;
    Q.push( 0 );
    Q.push( -10 );
    Q.push( 10 );

    while( !Q.empty() )
    {
        int tmp = Q.top();
        cout << tmp << endl;
        Q.pop();
    }
}


//bool comp(const int &a, const int &b)
bool comp(int a, int b)
{
    return a>b;
}
void sortF()
{
    int i;
    vector < int > v;
    v.pb( 10 );
    v.pb( -1 );
    v.pb( 4 );

    sort( all ( v ) );
    rep(i,SZ( v )) printf("%d ",v[i]); puts("");
    sort( all ( v ) , comp );
    rep(i,SZ( v )) printf("%d ",v[i]); puts("");

}


void setF()
{
    set< int > s;
    s.insert( 1 );
    s.insert( 2 );
    s.insert( 3 );
    ///assigning a set into a vector
    vector< int > v( s.begin(), s.end() );

    if( s.find( 8 ) != s.end() )
        cout<<"ase"<< endl;
    else cout <<"nai"<<endl;
}

void mapF()
{
    map< int, int > m;
    m[ 1 ]++;
    m[ 2 ]++;
    //cout << (m.find(9)!=m.end()) << endl;
    //cout << endl;
    cout << m[9] << " " << m[1]<< endl;
    //cout << endl;
    //cout << (m.find(9)!=m.end()) << endl;
}

void pairF()
{
    int a = 1,b=2;
    pair < int , int > x;
    x = make_pair( a , b );
    cout << x.first << " " << x.second << endl;
}

void nextP()
{
    string a = "1234";
    string b = "5678";
    next_permutation( all ( a ) );
    prev_permutation( all ( b ) );
    cout << a << endl;
    cout << b << endl;

    string c = "123";
    do
    {
        cout << c << endl;
    }while(next_permutation(all(c)));
}

void reverseF()
{
    string a = "1234";
    reverse( all ( a ) );
}
int main(void)
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //TimeLogger tm;
    int i,j,k,kase=0;
    //sortF();
    //setF();
    //mapF();
    //pairF();
    //nextP();
    return 0;
}
