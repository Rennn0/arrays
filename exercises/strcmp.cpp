
#include <iostream>
#include <iomanip>
using namespace std;

#define max 100

int str_cmp(char*,char*);

int main()
{
    char str1[max], str2[max];
    cout<<"first_";cin.getline(str1,max);
    cout<<"second_";cin.getline(str2,max);
    str_cmp(str1,str2);

}

int str_cmp(char* s1,char* s2)
{
    int diff, c;
    for(c=0 ; *s1!='\0' || *s2!='\0' ;*s1++, *s2++, c++)
    {
        diff=*s2-*s1;
        if(diff==0)
            continue;
        if(diff>0)
        {
            cout<<s2-c<<" is greater than "<<s1-c<<" by "<<diff<<endl;
            return diff;
        }
        else
        {
            cout<<s1-c<<" is greater than "<<s2-c<<" by "<<abs(diff)<<endl;
            return abs(diff);
        }
    }

    return 0;
}