// Global Variables are variables not found within any function of the program. 
//global variables can be accessed by any part of the program.

#include <iostream>
using namespace std; 

int age {18}; // this is a global variable, however this is not recommended use when typing large amounts of code. 

int main(){
// int age {18}; -> typically this is how a variable is initialized. Within a function, in this instance it's main
  //When we intialized age in main it is a local variable, local to main.
  
  int age {16}; //we can also declare another variable locally with the same varibale name. First the program will look locally.
  //so the program prints out age {16} first, shadowing int age{18}
  
cout << age << endl; 

return 0;

}
