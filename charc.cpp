//c string
//char array

#include "lib.cpp"

char header[]="\n\t****C string****\t\n";

int main()
{
    char hello[]="Hello ", name[20],message[80];
    cout<<header<<"first name_";
    cin>>setw(20)>>name;
    strcat(hello,name);
    cout<<hello<<endl;
    cin.sync();
    cout<<"message_";
    cin>>message;
    cin.getline(message,80);
    if(strlen(message)>0)
    {
        for(int i=0;message[i]!='\0';++i)
            cout<<message[i];
        cout<<endl;
    }
    
}