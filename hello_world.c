#include <stdio.h>

int add_together(int x, int y){
  int result = x + y;
  return result;
}

// Structures are new types of data. like so:
typedef struct{
  float x;
  float y;
} point;
// This created a new data type called point that is a collection of a x and y
// int in 2d space
// To use it:
point p;
p.x = 0.1;
p.y = 10.0;
// It looks like we know the internals of the point. Interesting.
float length = sqrt(p.x * p.x + p.y * p.y);

// Pointers are a slightly different verrsion of a normal type that is declared
// by adding as asterisk like so: int* some_int;
// Book says not to worry about what they are right now but they are useful
// for strings or lists. For example strings in C are declared by the pointer
// type char* which is a list of characters (A string, duh). Strings can
// also be declared litterally with "double qutoes"


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
  another_number = 50;
  // If we don't want to set the value of the int
  // A few built in types:
  // void  // Empty type
  char last_initial = 'M'; // Single Character/byte
  last_initial = 'P';
  int a_third_number = 13;
  a_third_number = 12;
  long a_big_int = 123456789012345;
  a_big_int /= 2;
  float another_derp = 0.433;
  another_derp *= 3;
  double a_bigger_float = 0.12341332;
  a_bigger_float -= 0.2;

  int result = add_together(number, a_third_number);
  result += 3;

  return 0;
}

