#include "class2.h"

inline bool is_leap_year(int y){
    return y%4==0 && y&100!=0 || y%400==0;
}

DATE::DATE
    (void)
    {
        day=1;month=1;year=1;    
        print();
    }

DATE::DATE
    (int d,int m,int y)
    {
        if(check(d,m,y)){
            day=d;month=m;year=y;
            print();
        }
        else
        cout<<"invalid input!\n";
    }
    
DATE::~DATE
    (void)
    {
        cout<<year<<"is leap year? "<<boolalpha<<is_leap_year(year)<<endl;
    }
    
void DATE::set_date
    (void)
    {
        time_t dro;
        time(&dro);
        struct tm *ptr=localtime(&dro);
        day=ptr->tm_mday;
        month=ptr->tm_mon+1;
        year=ptr->tm_year+1900;
        print();
    }

void DATE::set_date
    (int d,int m,int y)
    {
        if(check(d,m,y)){
            day=d;month=m;year=y;
            print();
        }
        else
        cout<<"invalid input!\n";
    }
    
bool DATE::is_equal
    (const DATE &obj)const
    {
        cout<<endl;
        return this->year==obj.year&&this->month==obj.month&&this->day==obj.day;
    }
    
bool DATE::is_less
    (const DATE &obj)const
    {
        cout<<endl;
        if(this->year<obj.year)
            return true;
        else if(this->month<obj.month)
            return true;
        else if(this->day<obj.day)
            return true;
        else
            return false;
    }

const string& DATE::as_string
    (void)const
    {
        cout<<endl;
        static string date;
        stringstream ios;
        ios<<setw(2)<<setfill('0')<<day
            <<'-'<<setw(2)<<setfill('0')<<month
            <<'-'<<setw(2)<<setfill('0')<<year;
        ios>>date;
        return date;
    }
    
inline bool DATE::check
    (short d,short m,short y)
    {
        if(d>=0&&d<=31 && m>=1&&m<=12 && y<=2022)
            return true;
        return false;
    }
int DATE::get_day
    (void) const
    {
        cout<<"day is_"<<this->day<<endl;
        return day;
    }
    
int DATE::get_month
    (void) const
    {
        cout<<"month is_"<<this->month<<endl;
        return month;
    }
    
int DATE::get_year
    (void) const
    {
        cout<<"year is_"<<this->year<<endl;
        return year;
    }
inline void DATE::print 
    (void) const
    {
        cout<<"\nday_"<<day<<endl;
        cout<<"month_"<<month<<endl;
        cout<<"year_"<<year<<endl;
    }