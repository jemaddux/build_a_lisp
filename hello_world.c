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

int main(int argc, char** argv){
  puts("Hello, turtles");
  // We declare a type like this:
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

