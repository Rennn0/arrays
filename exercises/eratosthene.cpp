#include "../lib.cpp"


// using namespace chrono;
// using cclock = chrono::steady_clock;


// sieve & this function has equal runtime at small range (1000)
// but in 1 000 000 sieve way faster

bool prime(int n){
    if(n==2)return true;
    for(int a=2;a<n/2;++a){
        if(n%a==0) return false;
    }
    return true;
};

int main(){
    bool primes[1000000]={true,true}; // all 0 , false==prime
    // fill_n(primes,1000,false);
    for(size_t i=2; i<sizeof(primes)/2;++i)
    {
       if(!primes[i])
       {
            for(size_t j=2*i; j<sizeof(primes);j+=i)
                primes[j]=true;
       }
    }
        
    for(size_t i=2;i<sizeof(primes);++i)
        if(!primes[i])
            cout<<i<<endl;
    
    // time_t now=time(0);
    // cout<<"begin__"<<now<<endl;
    
    // auto tic = cclock::now();
    
    // for(int i=2; i<10000;++i)
    //     if(prime(i))
    //         cout<<i<<endl;
    // auto toc = cclock::now();
    // cout << "Elapsed time: " << duration_cast<milliseconds>(toc - tic).count() << endl;
}

