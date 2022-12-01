#include <iostream>
#include <string.h>
using namespace std;

#define MAX 200

namespace myscope
{
    char *str(const char *s, const char*patt);
}

char line[500], pattern[]="boo";

int main()
{
    int line_nr=0;
    while(cin.getline(line,MAX))
    {
        ++line_nr;
        if(myscope::str(line,pattern)!=NULL)
        {
            cout.width(3);
            cout<<line_nr<<':'<<line<<endl;
        }
        else 
            cout<<"pattern "<<pattern<<" not found"<<endl;
    }
    return 0;
}

namespace myscope
{
    char *str(const char *s1, const char  *s2)
    {
        int len=strlen(s2);
        for( ; *s1!='\0';++s1)
            if(strncmp(s1,s2,len)==0)
                return (char *)s1;
        
        return NULL;
    }
}