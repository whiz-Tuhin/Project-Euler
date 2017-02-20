#include <iostream>
#include <climits>

//#define ULLONG_MAX 18446744073709551615ULL

using namespace std;

unsigned long long int highprimefac(unsigned long long int n){

  bool prime[ULLONG_MAX];
  memset(prime,true,sizeof(prime));

  for(unsigned long long int p = 2;p*p <= n;p++){
           if(prime[p] == true){
               for(unsigned long long int j = p*2;j <= n; j+=p)
                              prime[j] = false;
           }
  }
  unsigned long long int max = 2;
  for(unsigned long long int p = 2;p <= n;p++){
                if(prime[p] == true){
                        if(n%p == 0 && p > max){
                             max = p;
                        }
                }
  }
  
  return max;
}

int main( ){

  ios_base::sync_with_stdio(false);
  unsigned long long int n,t;

  cin>>t;

  for(unsigned long long  i = 0;i < t;i++){
               cin>>n;
               unsigned long long int res = highprimefac(n);
               cout<<res<<endl;
  }

  return 0;
}
