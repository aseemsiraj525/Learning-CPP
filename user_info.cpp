#include <iostream>

using namespace std;

int main ()
{   string user_name;
    int user_age;

    cout << "What is your name : ";
    getline ( cin , user_name);

    cout << "What is your age : ";
    cin >> user_age; 

    cout << "Hello " << user_name << endl ;
    cout << "You are " << user_age << " years old" << endl;

    return 0;
}

