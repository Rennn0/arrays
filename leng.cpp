#include "lib.cpp"

//array length + fibonacci

#define count 20

long fib[count+1]={0,1};

int main(){
    int i; 
    double q, lim;

    for(i=1;i<count;++i)
        fib[i+1]=fib[i]+fib[i-1];

    //(1+sqrt5)/2
    lim=(1.0+sqrt(5))/2.0;

    // new array

    for(i=2;i<count;++i)
    {
        q=(double)fib[i]/(double)fib[i-1];
        cout<<setw(5)<<i<<setw(10)<<fib[i]
            <<setw(15)<<fixed<<setprecision(10)<<q
            <<setw(15)<<scientific<<setprecision(3)
            <<lim-q<<endl;
    }
}