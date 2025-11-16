#include <iostream>
#include <vector>
#include <set>

#define ll long long
using namespace std;

void init(){
    cin.tie(0);
    cin.sync_with_stdio(0);
}

// mod arithmatic 
void modular_arithmetic(ll a,ll b,ll m){
    cout<<"add = "<<((a%m)+(b%m))%m<<"\n";

    cout<<"mul = "<<((a%m)*(b%m))%m<<"\n";

    cout<<"sub = "<<((a%m)-(b%m)+m)%m<<"\n";

}

ll modular_exponentiation(ll x,ll n){
    ll result = 1;
    while(n>0){
        if(n%2==1)result*=x;
        x*=x;
        n/=2;
    }
    return result;
}

// divisiors 
set<ll> divisors(ll n){
    set<ll> divs;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            divs.insert(i);
           divs.insert(n/i);
        }
    }
    return divs;
}

// isPrime 
bool isPrime(ll n){
    if(n==2)return true;
    if(n==1 || n%2==0)return false;
    for(ll i=3;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}

// prime factorization
vector<ll> primeFactorilization(ll n){
    vector<ll> primes;
    ll f = 2;
    while(n>1){
        if(n%f==0){
            primes.push_back(f);
            n/=f;
        }
        else{
            f++;
        }
    }
    return primes;
}

// Primse in Range "SEIVE"
vector<ll> seive(ll n){
    vector<bool> isprimes(n+1,1);
    isprimes[0]=isprimes[1]=0;
    for(int i=2;i*i<=n;i++){
        if(isprimes[i]){
            for(int j=i*2;j<=n;j+=i)isprimes[j]=0;
        }
    }

    vector<ll> primes;
    for(int i=2;i<=n;i++){
        if(isprimes[i])primes.push_back(i);
    }
    return primes;
}

// gcd
ll gcd(ll a,ll b){
    if(b==0)return a;
    return gcd(b,a%b);
}

// lcm
ll lcm(ll a,ll b){
    return a/gcd(a,b)*b;
}


//extendedEuclid
// recursive
ll extendedEuclid_recursive(ll a,ll b,ll& x,ll& y){
    if(b==0){
        a=1;
        b=0;
        return a;
    }
    ll x1=x,y1=y;
    ll d= extendedEuclid_recursive(b,a%b,x1,y1);
    x=y1;
    y=x1-y1*(a/b);
    return d;
}
//iterative
ll extendedEuclid_iterativee(ll a,ll b,ll& x_prev,ll& y_prev){
    x_prev=1,y_prev=0;
    int x=0,y=1;
    while (b) {
        int q=a/b;
        tie(x,x_prev)=make_tuple(x_prev-q*x,x);
        tie(y,y_prev)=make_tuple(y_prev-q*y,y);
        tie(a,b)=make_tuple(b,a%b);

    }
    return a;
}



int main() {
    init();

    vector<ll> primes = seive(100);
    for(int it:primes)cout<<it<<",";

    // ll n,k;
    // cin>>n>>k;
    // cout<<modular_exponentiation(n,k)<<"\n";
    // if( modular_exponentiation(2,k) >= n)cout<<-1<<"\n";
    // else{
    //     ll rest =  n / modular_exponentiation(2,k-1);
    //     while(k>1){cout<<2<<" ";k--;}
    //     cout<<rest<<"\n";
    // }
    // testing 
    // ll a,b,c;cin>>a>>b>>c;modular_arithmetic(a,b,c);
    // cout<<modular_exponentiation(3,5)<<endl;
    // cout<<(isPrime(n)? "Yes\n":"No\n");
    // set<ll>divs = divisors(n);
    // for(ll it:divs)cout<<it<<" ";
    // cout<<"\n";
    return 0;
}
