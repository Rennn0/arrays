#include <iostream>
#include <string.h>
using namespace std;

char  *strcat(char *,char *);

int main()
{
    char a[]="luka", b[]=" danelia";
    cout<<strcat(a,b);
}

char  *strcat(char *s1,char *s2)
{
    char *p=s1+strlen(s1);
    strcpy(p,s2);
    return s1;
}