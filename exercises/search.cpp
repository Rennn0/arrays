/*Produce tool called search to which u can pass any search pattern via
the command line. the program should issue an error message and terminate if the command line does not contain a 
search string. use the srandard funciton strstr()

sample call:
seach Shanghai < news.txt 
*/

#include <iostream>
#include <cstring>
using namespace std;
#define max 100

char arr[max];

int main(int argc, char** argv)
{
    if(argc!=2)
    {
        cerr<<"Error\nInclude Search Pattern...\n";
        return 1;
    }
    
    int n=0;

    while(cin.getline(arr,max))
    {
        ++n;
        if(strstr(arr,*(argv+1))!=NULL)
        {
            cout.width(3);
            cout<<n<<':'<<arr<<endl;
        }
    }

    return 0;
}