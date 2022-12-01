#include <iostream>
#include <string.h>
using namespace std;

// version 1
void scopy(char s1[],char s2[])
{
    size_t t;
    for(t=0; s2[t]!='\0';++t)
    {
        s1[t]=s2[t];
    }
    s1[t]='\0'; // last member
}

// pointer version 2
void ptrcpy(char *s1,char *s2)
{
    for( ;*s2!='\0';++s2,++s1)
        *s1=*s2;
    *s1='\0';
}

// pointer version 3

void pstcpy(char *s1,char *s2)
{
    while((*s1++=*s2++)!='\0');
}

int main()
{
    char a[]="lukaaaaaaaaaaa", b[20];
    // strcpy(b,a); standard version
    // scopy(b,a); version 1
    // ptrcpy(b,a); pointer version 2
    pstcpy(b,a);
    cout<<b<<endl;
}