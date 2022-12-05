/*
a)write a pprogram that outputs its own name and all command line arguments each in separate line
b)now extend the prgram to output its own environment. the environment is a memomry area containing string in the format

a third parameter for the function main() allows access to the environment this parameter is an array of pointers just like
argv the array elements are char pointers to the environme tstring the last element being a null pointer*/

#include <iostream>
using namespace std;

int main(int argc, char** argv, char** argenv)
{
    

    cout<<" Program: "<<*argv<<endl;

    cout<<"\nCommand line arguments :"<<endl;
    int i;
    for(i=1;i<argc;++i)
        cout<<argv[i]<<endl;

    cout<<"type <return> to go on";
    cin.get();

    cout<<"Environment strings :"<<endl;
    // for(i=0;argenv[i]=NULL;++i)
    //     cout<<argenv[i]<<endl;

    // idk upper version dumpes core, ill use my own
    for(size_t t=0;*argenv!=NULL;++t)
    {
        cout<<*argenv++<<endl;
    }

    return 0;
}