#include <iostream>
using namespace std;

int main(int argc,char *argv[])
{
    // if(argc!=3)
    // {
    //     cerr<<"Use: hello name1, name2"<<endl;
    //     return 0;
    // }

    cout<<"Hello "<<argv[1]<<'!'<<endl;
    cout<<"Best "<< argv[3]<<" wishes\nto yours "<<argv[2]<<endl;
    return 0;
}