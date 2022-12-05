
// iter_swap magivrad shemedzlo chemive func shemeqmna swapistvis

#include <iostream>
#include <random>
using namespace std;
#define max 20

random_device rnd;
default_random_engine gen(rnd());
uniform_int_distribution<int>dis(-10000,10000);

int array[max];
void fill(int*);
void sel_sor(int*);

int main()
{
    fill(array);
    sel_sor(array);
    
    for(auto v:array)
        cout<<v<<" ";
}

void fill(int* arr)
{
    for(size_t  t=0;t<max;++t)
        *(arr+t)=dis(gen);
}

void sel_sor(int*arr)
{
    int min;

    for(size_t t=0;t<max;t++)
    {
        for(size_t m=0;t+m<max;m++)
        {
            if(*(arr+t+m)<*(arr+t))
            {
                min=m;
                iter_swap(arr+t, arr+t+m);
            }
        }
    }
}


