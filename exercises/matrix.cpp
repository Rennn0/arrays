/*write a funciton tha calculates teh sums of the rows annd columns in an int
 matrix with three row sand five columns  store the sums
 of the rows and columns separatelu 
 ina one dimensional row culumn array

            <120    120-129     130-139     140-149     >=160
    20-29   25      34          26          12          8
    30-39   19      27          24          11          4
    40-49   6       15          35          36          18

*/

#include "../lib.cpp"

typedef int matrix[5];
void set(matrix*);
void calculate(const matrix*, int*,int*);
void print(const int*,const int*);

int main()
{
    //goes on heap memory
    matrix* ptr=new matrix[3]; //same array[3][5]
    int* row=new int[3]; // sum for rows
    int* column=new int[5]; // sum for columns
    
    set(ptr);
    calculate(ptr,row,column);
    print(row,column);
    
    delete ptr, row, column;
    return 0;
}
// do i have to hardcode this shit? okkok......
void set(matrix* p){
    int first[5]={25,34,26,12,8};
    int second[5]={19,27,24,11,4};
    int third[5]={6,15,35,36,18};

    for(int r=0;r<3;++r)
        for(int c=0;c<5;c++)
            {
                if(r==0)
                    *(*(p+r)+c)=first[c];
                else if(r==1)
                    *(*(p+r)+c)=second[c];
                else 
                    *(*(p+r)+c)=third[c];
            }
}

void calculate(const matrix* p, int* row,int* col)
{
    for(int r=0;r<3;++r)
        for(int c=0;c<5;c++)
        {
            *(row+r)+=*(*(p+r)+c);
            *(col+c)+=*(*(p+r)+c);
        }
}

void print(const int* row,const int* column)
{
    cout<<"Age 20-29 __ "<<*row<<endl;
    cout<<"Age 30-39 __ "<<*(row+1)<<endl;
    cout<<"Age 40-49 __ "<<*(row+2)<<endl;

    cout<<"Frequency <120 __ "<<*column<<endl;
    cout<<"Frequency 120-129 __ "<<*(column+1)<<endl;
    cout<<"Frequency 130-139 __ "<<*(column+2)<<endl;
    cout<<"Frequency 140-149 __ "<<*(column+3)<<endl;
    cout<<"Frequency >=160 __ "<<*(column+4)<<endl;

    cout<<"\n\nMY JOB HERE IS DONE!\nBYE\n";
}