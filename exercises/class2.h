#include "../lib.cpp"

class DATE
{
    private:
        short day,month,year;
        
    public:
        DATE(void);
        DATE(int,int,int);
        ~DATE(void);
        void set_date(void);
        void set_date(int,int,int);
        int get_month(void) const;
        int get_day(void) const;
        int get_year(void) const;
        bool check(short,short,short);
        bool is_equal(const DATE&) const;
        bool is_less(const DATE&) const;
        const string& as_string(void) const;
        void print(void)const;
};