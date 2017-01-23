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


///Day 1
///-----
///Swapping integers                            ( done )
///GCD:Euclid ( Special Cases a > b , a==b==0 ) ( done )
///LCM                                          ( done )
///Prime Numbers                                ( done )
///Prime Testing                                ( done )

///Prime Factoring :
    ///Naive,                                   ( done )
    ///Better,                                  ( done )


///Day 2
///-----
    ///Sieve ( basic )
    ///Sieve ( Optimized ), Pre: Bit Manips
        /*
            Illustrate
        */

/// The representation of a composite number as a product of Prime Factor is unique.


///Future Tasks
///------------

/// Number of Divisor ( + ve )
/// Sum Of Divisor    ( + ve )
/// Multiplicative Function
    /*
        1. illustration ( power series ) * ( power series)
        2. derive the formula for both, combinatorial approach for t(n)
        3. t(n) is odd iff n is perfect square
        4. t(n) and sigma(n) are multiplicative
        5. Q: The number of ways n can be split into two relatively prime factors
        6. Q: Perfect Number and sigma
    */
///

///Number Theoretic Functions:
    ///Euler Phi Function / Totient Function

///Divisor Counting
    ///divisor of both N and K.
    ///divisor of N and is divisible by K.
    ///divisor of N and is not divisible by K.
///??Divisor Construction

///Congruence Defn
///Modular Operations + Modulo-Congruence: Addition, Subtraction, Multiplication
///LDE
///Modular Inverse

///http://www.euclidthegame.com/Level1/

///Adhoc: Josephus Simulation
/**
        Number Theory - 1
**/

    ///GCD: Euclid's Algorithm          ( done )
        lli gcd(lli a,lli b)
        {
            if(b==0) return a;
            return gcd(b,a%b);
        }


    ///Sieve Basic Code
        const int mx=100;
        int prime[mx],np=0;
        bool isnp[mx+10];
        void siv(void)
        {
            int i,j,k;
            isnp[1] = isnp[0]=true;
            isnp[2] = false;
            for(i=4;i<=lim;i+=2) isnp[i] = true;

            int lim = sqrt(mx) + 1;
            for(i=3;i<=lim;i+=2)
                if(!isnp[i])
                    for(j=i<<1;j<=mx;j+=i)
                        isnp[j]=true;
            np=0;
            prime[np++]=2;
            for(i=3;i<=mx;i+=2)
                if(!isnp[i])
                    prime[np++]=i;
        }
        /*
            Issues:
                1. Even number and isPrime check
        */

int main(void)
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //TimeLogger tm;
    int i,j,k,kase=0;
    cout << modPow(2,10,13) << endl;

    siv();
    rep(i,np) printf("%d %d\n",i+1,prime[i]);
    return 0;
}
