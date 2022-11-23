#include "../lib.cpp"

// my own bubble sort algorithm

int main(){
    long numbers[10]={}, n;
    int j, i, size=sizeof(numbers)/sizeof(long);

    for(i=0;i<size && cin>>n;++i)
        numbers[i]=n;
    
    bool swaped=true;

    // for(int t=0;t<5;++t){  
    //     for(i=0, j=1;j<size; ++i, ++j) {
    //         if(numbers[i]>numbers[j]){
    //             swap(numbers[i],numbers[j]);
    //             swaped=true;
    //         }
    //     }
    //     if(swaped==false)break;
    //     --size;
    //     swaped=false;
    // }

    while(swaped!=false){ // cooler way
        swaped=false;
        for(i=0, j=1;j<size; ++i, ++j) {
            if(numbers[i]>numbers[j]){
                swap(numbers[i],numbers[j]);
                swaped=true;
            }
        }
        --size;
    }
    cout<<"sorted :: \n";
    for(long v:numbers)
        cout<<v<<" ";
}