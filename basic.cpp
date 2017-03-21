#include <iostream>
#include <string> 
#include <typeinfo> 
int main()
{
  int a,b,c;
  std::string myQuote;
  std::cout << "Enter two numbers" << std::endl;
  std::cin >> a >> b ;

  c = a > b ? a : b;

  std::cout << "The greater number is: " << c << std::endl;
  
  std::cout << "And the size of variable c is: " << sizeof(c) << std::endl;
  
  std::cout << "what is your favorite quote" << std::endl;
  std::getline(std::cin, myQuote);
  std::cout << "Your Quote has: " << myQuote.length() << " Length" << std::endl;
  

  enum wind_direction_t { 
    NORTH_WIND,
    WEST_WIND,
    EAST_WIND,
    SOUTH_WIND,
    NO_WIND
  };
   
  wind_direction_t wind_direction = NORTH_WIND;
  //wind_direction = 234; this won't work only values in the enumeration can work 
  // this is the advantage over #define 

  int x = 0; // c- like initialization 
  int j(0); // constructor initialization
 // c++ -11 
 
/*  int m {0}; // uniform method 

 // type deduction 
  int foo = 0; 
  auto bar = foo; // will make bar being of same type as foo and same value 
  std::cout << foo << bar << std::endl;

  int me = 0; 
  decltype (you) me; // set you with same type as me */



} 
