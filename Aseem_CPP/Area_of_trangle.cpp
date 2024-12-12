// passmark 50 ,  if full  mark 90
#include <iostream>

using namespace std ;

int main () {

      float length, width, height, area ;
    
      cout << "enter length " ;
      cin >> length ;
      
      cout << "enter width " ;
      cin >> width ;

      cout << "enter height " ;
      cin >> height ;

      // 8000= yes, 27000= no, other = getlost
      // area of triangle l*b*h

      area = length * width * height ;
      cout << "area of triangle = " << area << "\n" ;
    
      if ( area == 8000) cout << "yes" ;
      else if ( area == 27000) cout << "no" ;
      else cout << " oomb  " ;
       
       return 0 ;

}
