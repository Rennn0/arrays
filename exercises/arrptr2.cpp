#include <iostream>
#include <string.h>
using namespace std;

void reverse(char *, char *);


int main()
{
    char arr[50], revarr[50]={};
    cin.get(arr,50);
    cout<<"Before_ "<<arr<<endl;

    reverse(arr,revarr);
    cout<<endl;
    cout<<"After_ "<<revarr<<endl;
}


void reverse(char *s, char *rs)
{
    rs+=strlen(s)-1;
    while(*s!='\0')
    {
        *rs--=*s++;
    }
}