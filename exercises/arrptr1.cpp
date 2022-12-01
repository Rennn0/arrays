#include <iostream>
using namespace std;

int main()
{
    int v[]={10,20,30,40}, i , *pv;

    for(pv=v;pv<=v+3;++pv)
        cout<<"\t*pv="<<*pv;
    cout<<endl;
    //*pv=10 ... *pv=20 ... *pv=30 ... *pv=40

    for(pv=v, i=1; i<=3; i++)
        cout<<"\tpv[i]="<<pv[i];
    cout<<endl;
    //pv[i]=20...30...40

    for(pv=v, i=0; pv+i<=&v[3];pv++, i++)
        cout<<"\t*(pv+i)="<<*(pv+i);
    cout<<endl;
    //*(pv+i)=10...30
    // -0.5 pts

    for(pv=v+3;pv>=v;--pv)
        cout<<"\tv["<<(pv-v)<<"] ="<<v[pv-v];
        cout<<endl;
    //  3 ..2 .. 1.. 0
    // 40 .. 30 .. 20.. 10    
}

