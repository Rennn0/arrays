#include <iostream>
#include <string.h>
using namespace std;

void reverse(char str[],char unmstr[]);

int main()
{
    const int cnt=81;
    char word[cnt],revword[cnt];

    cin.width(cnt);
    cin>>word;

    reverse(word,revword);

    cout<<revword<<endl;

    return 0;
}

void reverse(char s1[],char s2[])
{
    int j=0;
    for(int i=strlen(s1)-1;i>=0;--i,++j)
        s2[j]=s1[i];
    s2[j]='\0';
}