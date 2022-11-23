#include "lib.cpp"

//simple array

int main(){
    const int max=10;
    float arr[max],x;
    int i,count;

    cout<<"10 num_";
    for(i=0;i<max && cin>>x;++i)
        arr[i]=x;
    
    count=i;
    cout<<endl;
    for(i=0;i<count;++i)
        cout<<setw(5)<<arr[i]<<endl;
}