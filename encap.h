#include "lib.cpp"

#ifndef _TelList_
#define _TelList_
#define MAX 100
#define PSEUDO -1

// class with public default access
struct Element 
{
    string name, telNr;
};

//actual class
class TelList
{
    private:
        Element v[MAX];
        int count;

    public:
        TelList(){count=0;}
        int get_count()const{return count;}
        Element *retrieve(int i)
            {
                return (i>=0 && i<count)? &v[i]:NULL;
            }
        bool append(const Element &el)
            {
                return append(el.name,el.telNr);
            }
        bool append(const string &name,const string &telNr);
        bool erase(const string &name);
        int search(const string &name);
        void print();
        int print(const string&name);
        int get_new_entries();
};


#endif