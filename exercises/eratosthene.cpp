#include "../lib.cpp"

// sieve & this function has equal runtime at small range (1000)
// but in 1 000 000 sieve way faster

// bool prime(int n){
//     if(n==2)return true;
//     for(int a=2;a<n/2;++a){
//         if(n%a==0) return false;
//     }
//     return true;
// };

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

    // for(int i=2; i<1000000;++i)
    //     if(prime(i))
    //         cout<<i<<endl;
    
}

