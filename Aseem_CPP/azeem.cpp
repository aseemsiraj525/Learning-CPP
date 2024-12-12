#include <iostream>

using namespace std ;

int main () {

        string user_name , user_location ;

        int user_age ;

        cout << "what is your name : " ;
        getline (cin, user_name) ;

        cout << "what is your location : " ;
        getline (cin , user_location) ;

        cout << "what is your age : " ;
        cin >> user_age ;

        cout << " \n your name is " << user_name << "\n" ;
        cout << " \n your location is " <<  user_location << "\n" ;
        cout << " \n your age is " << user_age << "\n" ;

        return 0 ;

}
