#include "class2.cpp"

int main()
{
    DATE arr[4]={DATE(23,11,2022),DATE() };
    arr[2].set_date();
    arr[3].set_date(10,10,1100);
    for(int a{};a<4;++a){
        cout<<sizeof(arr[a])<<endl;
    }
    cout<<sizeof(arr)<<endl;
}