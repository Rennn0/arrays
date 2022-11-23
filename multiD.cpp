#include "lib.cpp"
//random shit for printing
char rep[2][20]={"armostrong;wendus","envy, lust"};
int art[2][5]={
    {1,2,3,4,5},
    {6,7,8,9,0}
};

int main()
{
    // int dime[][3]={{4,5},{6,7}};
    for(int a{};a<2;++a){
        cout<<rep[a]<<endl;
        for(int b{};b<5;++b)
            cout<<setw(6)<<art[a][b];
        cout<<endl;
    }
        
}