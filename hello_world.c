#include <stdio.h>

int main(int argc, char** argv){
  puts("Hello, turtles");


  // How to build the c program:
  // cc -std=c99 -Wall hello_world.c -o hello_world
  // How to run said program
  // ./hello_world

  // C programs consist of functions definitions and structure definitions
  // Eg it is a list of functions and types
  // The functions can call themselves of other functions
  // Layers of complexity are built in C by calling functions in other
  // libraries or by using their data types
  // C programs always start the main()
  // Variables are named data items. Function manipulate Variables
  // All C variables have an explicit type which is either built into
  // the language or built by the programmer. We declare a type like this:

  int number = 42;
  // Or just
  int another_number;
  // If we don't want to set the value of the int
  // A few built in types:
  // void  // Empty type
  char last_initial = 'M'; // Single Character/byte
  int a_third_number = 13;
  long a_big_int = 123456789012345;
  float another_derp = 0.433;
  double a_bigger_float = 0.12341332;




  return 0;
}
