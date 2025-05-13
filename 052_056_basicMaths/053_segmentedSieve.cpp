#include<iostream>
using namespace std;

void sieve(int sq, vector<int> &prime){
  vector<bool> primes(sq+1, true);

  for(int i=2; i<sq; i++){
    if(primes[i]){
      prime.push_back(i);
      for(int j=2*i; j<sq; j+=i){
        primes[i] = false;
      }
    }
  }
}

void segmentedSieve(int l, int h){

  vector<int> prime;

  int sq = sqrt(h);
  sieve(sq, prime);

  vector<bool> isPrime(h-l+1, true);

  for(int p: prime){
    int sm = (l/p)*p;

    if(sm < l) sm+=p;

    for(int i=sm; i<=h; i+=p){
      isPrime[i-l] = false;
    }
  }

  for(int i=l; i<=h; i++){
    if(isPrime[i-l]){
      cout << i << " ";
    }
  }
}

int main(){
  int l,h;

  cin >> l >> h;

  segmentedSieve(l, h);
}