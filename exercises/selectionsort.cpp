#include <iostream>
#include <random>
using namespace std;
#define max 20000

random_device rnd;
default_random_engine gen(rnd());
uniform_int_distribution<int>dis(-10000,10000);

int array[max];
void fill(int*);
void sel_sor(int*);

int main()
{
    // fill(array);
    int arr[]={5,4,6,0,1,7};
    
    sel_sor(arr);
    
    for(auto v:arr)
        cout<<v<<" ";
}

// void fill(int* arr)
// {
//     for(size_t  t=0;t<max;++t)
//         *(arr+t)=dis(gen);
// }

void sel_sor(int*arr)
{
    int min;

    for(size_t t=0;t<4;t++)
    {
        for(size_t m=0;t+m<4;m++)
        {
            if(*(arr+t+m)<*(arr+t))
            {
                min=m;
                iter_swap(arr+t, arr+t+m);
            }
        }
    }
}


